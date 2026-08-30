using KanjiLearner.Models;
using KanjiLearner.Data;

namespace KanjiLearner.Services
{
    public class KanjiService
    {
        private readonly List<Kanji> _allKanji;

        public KanjiService()
        {
            _allKanji = KanjiData.GetKanjiList();
        }

        public List<Kanji> GetAllKanji() => _allKanji;

        public List<Kanji> GetKanjiByGrade(int grade) =>
            _allKanji.Where(k => k.Grade == grade).ToList();

        public Kanji? GetKanjiById(int id) =>
            _allKanji.FirstOrDefault(k => k.Id == id);

        public List<Kanji> SearchKanji(string searchTerm)
        {
            if (string.IsNullOrWhiteSpace(searchTerm))
                return _allKanji;

            return _allKanji.Where(k =>
                k.Character.Contains(searchTerm) ||
                k.Meaning.Contains(searchTerm, StringComparison.OrdinalIgnoreCase) ||
                k.Romaji.Contains(searchTerm, StringComparison.OrdinalIgnoreCase) ||
                k.KunYomi.Contains(searchTerm, StringComparison.OrdinalIgnoreCase) ||
                k.OnYomi.Contains(searchTerm, StringComparison.OrdinalIgnoreCase)
            ).ToList();
        }

        public List<Kanji> GetRandomKanji(int count)
        {
            var random = new Random();
            return _allKanji.OrderBy(x => random.Next()).Take(count).ToList();
        }

        public List<Kanji> GetFlashcardSet(int count = 20)
        {
            return GetRandomKanji(count);
        }
    }
}