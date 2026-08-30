namespace KanjiLearner.Models
{
    public class Kanji
    {
        public int Id { get; set; }
        public string Character { get; set; } = string.Empty;
        public string Romaji { get; set; } = string.Empty;
        public string Meaning { get; set; } = string.Empty;
        public string KunYomi { get; set; } = string.Empty;
        public string OnYomi { get; set; } = string.Empty;
        public int Grade { get; set; }
        public int StrokeCount { get; set; }
        public string Radical { get; set; } = string.Empty;
        public List<string> Examples { get; set; } = new List<string>();
    }
}