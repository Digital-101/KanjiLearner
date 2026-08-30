using KanjiLearner.Models;

namespace KanjiLearner.Data
{
    public static class KanjiData
    {
        public static List<Kanji> GetKanjiList()
        {
            var kanjiList = new List<Kanji>();
            int id = 1;

            // Complete Grade 1 (80 kanji)
            var grade1Kanji = new[]
            {
                new { Character = "一", Romaji = "ichi", Meaning = "one", Kun = "hito(tsu)", On = "ichi, itsu" },
                new { Character = "二", Romaji = "ni", Meaning = "two", Kun = "futa(tsu)", On = "ni" },
                new { Character = "三", Romaji = "san", Meaning = "three", Kun = "mittsu", On = "san" },
                new { Character = "四", Romaji = "yon", Meaning = "four", Kun = "yottsu", On = "shi" },
                new { Character = "五", Romaji = "go", Meaning = "five", Kun = "itsutsu", On = "go" },
                new { Character = "六", Romaji = "roku", Meaning = "six", Kun = "muttsu", On = "roku" },
                new { Character = "七", Romaji = "nana", Meaning = "seven", Kun = "nanatsu", On = "shichi" },
                new { Character = "八", Romaji = "hachi", Meaning = "eight", Kun = "yattsu", On = "hachi" },
                new { Character = "九", Romaji = "kyuu", Meaning = "nine", Kun = "kokonotsu", On = "kyuu" },
                new { Character = "十", Romaji = "juu", Meaning = "ten", Kun = "tou", On = "juu" },
                new { Character = "百", Romaji = "hyaku", Meaning = "hundred", Kun = "mom", On = "hyaku" },
                new { Character = "千", Romaji = "sen", Meaning = "thousand", Kun = "chi", On = "sen" },
                new { Character = "万", Romaji = "man", Meaning = "ten thousand", Kun = "yorozu", On = "man" },
                new { Character = "円", Romaji = "en", Meaning = "yen", Kun = "maru(i)", On = "en" },
                new { Character = "年", Romaji = "nen", Meaning = "year", Kun = "toshi", On = "nen" },
                new { Character = "月", Romaji = "getsu", Meaning = "month", Kun = "tsuki", On = "getsu, gatsu" },
                new { Character = "日", Romaji = "nichi", Meaning = "day", Kun = "hi, ka", On = "nichi, jitsu" },
                new { Character = "時", Romaji = "ji", Meaning = "time", Kun = "toki", On = "ji" },
                new { Character = "分", Romaji = "fun", Meaning = "minute", Kun = "wa(keru)", On = "fun, bun" },
                new { Character = "火", Romaji = "ka", Meaning = "fire", Kun = "hi", On = "ka" },
                new { Character = "水", Romaji = "sui", Meaning = "water", Kun = "mizu", On = "sui" },
                new { Character = "木", Romaji = "moku", Meaning = "tree", Kun = "ki", On = "moku, boku" },
                new { Character = "金", Romaji = "kin", Meaning = "gold", Kun = "kane", On = "kin" },
                new { Character = "土", Romaji = "do", Meaning = "earth", Kun = "tsuchi", On = "do, to" },
                new { Character = "空", Romaji = "sora", Meaning = "sky", Kun = "sora", On = "kuu" },
                new { Character = "林", Romaji = "hayashi", Meaning = "grove", Kun = "hayashi", On = "rin" },
                new { Character = "森", Romaji = "mori", Meaning = "forest", Kun = "mori", On = "shin" },
                new { Character = "山", Romaji = "yama", Meaning = "mountain", Kun = "yama", On = "san" },
                new { Character = "川", Romaji = "kawa", Meaning = "river", Kun = "kawa", On = "sen" },
                new { Character = "田", Romaji = "ta", Meaning = "rice field", Kun = "ta", On = "den" },
                new { Character = "口", Romaji = "kuchi", Meaning = "mouth", Kun = "kuchi", On = "kou" },
                new { Character = "目", Romaji = "me", Meaning = "eye", Kun = "me", On = "moku" },
                new { Character = "耳", Romaji = "mimi", Meaning = "ear", Kun = "mimi", On = "ji" },
                new { Character = "手", Romaji = "te", Meaning = "hand", Kun = "te", On = "shu" },
                new { Character = "足", Romaji = "ashi", Meaning = "foot", Kun = "ashi", On = "soku" },
                new { Character = "心", Romaji = "kokoro", Meaning = "heart", Kun = "kokoro", On = "shin" },
                new { Character = "力", Romaji = "chikara", Meaning = "power", Kun = "chikara", On = "ryoku" },
                new { Character = "気", Romaji = "ki", Meaning = "spirit", Kun = "ki", On = "ki" },
                new { Character = "男", Romaji = "otoko", Meaning = "man", Kun = "otoko", On = "dan" },
                new { Character = "女", Romaji = "onna", Meaning = "woman", Kun = "onna", On = "jo" },
                new { Character = "子", Romaji = "ko", Meaning = "child", Kun = "ko", On = "shi" },
                new { Character = "父", Romaji = "chichi", Meaning = "father", Kun = "chichi", On = "fu" },
                new { Character = "母", Romaji = "haha", Meaning = "mother", Kun = "haha", On = "bo" },
                new { Character = "兄", Romaji = "ani", Meaning = "older brother", Kun = "ani", On = "kei" },
                new { Character = "弟", Romaji = "otouto", Meaning = "younger brother", Kun = "otouto", On = "tei" },
                new { Character = "姉", Romaji = "ane", Meaning = "older sister", Kun = "ane", On = "shi" },
                new { Character = "妹", Romaji = "imouto", Meaning = "younger sister", Kun = "imouto", On = "mai" },
                new { Character = "友", Romaji = "tomo", Meaning = "friend", Kun = "tomo", On = "yuu" },
                new { Character = "人", Romaji = "hito", Meaning = "person", Kun = "hito", On = "jin, nin" },
                new { Character = "名", Romaji = "na", Meaning = "name", Kun = "na", On = "mei" },
                new { Character = "上", Romaji = "ue", Meaning = "above", Kun = "ue", On = "jou" },
                new { Character = "下", Romaji = "shita", Meaning = "below", Kun = "shita", On = "ka" },
                new { Character = "左", Romaji = "hidari", Meaning = "left", Kun = "hidari", On = "sa" },
                new { Character = "右", Romaji = "migi", Meaning = "right", Kun = "migi", On = "u" },
                new { Character = "中", Romaji = "naka", Meaning = "inside", Kun = "naka", On = "chuu" },
                new { Character = "大", Romaji = "dai", Meaning = "big", Kun = "oo(kii)", On = "dai" },
                new { Character = "小", Romaji = "shou", Meaning = "small", Kun = "chii(sai)", On = "shou" },
                new { Character = "本", Romaji = "hon", Meaning = "book", Kun = "moto", On = "hon" },
                new { Character = "字", Romaji = "ji", Meaning = "character", Kun = "aza", On = "ji" },
                new { Character = "学", Romaji = "gaku", Meaning = "study", Kun = "mana(bu)", On = "gaku" },
                new { Character = "校", Romaji = "kou", Meaning = "school", Kun = "", On = "kou" },
                new { Character = "生", Romaji = "sei", Meaning = "life", Kun = "i(kiru)", On = "sei" },
                new { Character = "先", Romaji = "sen", Meaning = "before", Kun = "saki", On = "sen" },
                new { Character = "王", Romaji = "ou", Meaning = "king", Kun = "", On = "ou" },
                new { Character = "玉", Romaji = "gyoku", Meaning = "ball", Kun = "tama", On = "gyoku" },
                new { Character = "車", Romaji = "sha", Meaning = "car", Kun = "kuruma", On = "sha" },
                new { Character = "国", Romaji = "koku", Meaning = "country", Kun = "kuni", On = "koku" },
                new { Character = "園", Romaji = "en", Meaning = "garden", Kun = "sono", On = "en" },
                new { Character = "天", Romaji = "ten", Meaning = "heaven", Kun = "ama", On = "ten" },
                new { Character = "地", Romaji = "chi", Meaning = "ground", Kun = "", On = "chi, ji" },
                new { Character = "星", Romaji = "sei", Meaning = "star", Kun = "hoshi", On = "sei" },
                new { Character = "花", Romaji = "hana", Meaning = "flower", Kun = "hana", On = "ka" },
                new { Character = "草", Romaji = "sou", Meaning = "grass", Kun = "kusa", On = "sou" },
                new { Character = "虫", Romaji = "chuu", Meaning = "insect", Kun = "mushi", On = "chuu" },
                new { Character = "犬", Romaji = "ken", Meaning = "dog", Kun = "inu", On = "ken" },
                new { Character = "猫", Romaji = "byou", Meaning = "cat", Kun = "neko", On = "byou" },
                new { Character = "魚", Romaji = "gyo", Meaning = "fish", Kun = "sakana", On = "gyo" },
                new { Character = "鳥", Romaji = "chou", Meaning = "bird", Kun = "tori", On = "chou" },
                new { Character = "馬", Romaji = "ba", Meaning = "horse", Kun = "uma", On = "ba" },
                new { Character = "牛", Romaji = "gyu", Meaning = "cow", Kun = "ushi", On = "gyu" }
            };

            foreach (var item in grade1Kanji)
            {
                kanjiList.Add(new Kanji
                {
                    Id = id++,
                    Character = item.Character,
                    Romaji = item.Romaji,
                    Meaning = item.Meaning,
                    KunYomi = item.Kun,
                    OnYomi = item.On,
                    Grade = 1,
                    StrokeCount = GetStrokeCount(item.Character),
                    Radical = GetRadical(item.Character),
                    Examples = GetExamples(item.Character)
                });
            }

            // Grade 2 (160 kanji - showing subset for brevity, but you can add all)
            var grade2Kanji = new[]
            {
                new { Character = "引", Romaji = "in", Meaning = "pull", Kun = "hi(ku)", On = "in" },
                new { Character = "運", Romaji = "un", Meaning = "carry", Kun = "hako(bu)", On = "un" },
                new { Character = "雲", Romaji = "un", Meaning = "cloud", Kun = "kumo", On = "un" },
                new { Character = "園", Romaji = "en", Meaning = "garden", Kun = "sono", On = "en" },
                new { Character = "遠", Romaji = "en", Meaning = "far", Kun = "too(i)", On = "en" },
                new { Character = "何", Romaji = "nani", Meaning = "what", Kun = "nani", On = "ka" },
                new { Character = "科", Romaji = "ka", Meaning = "subject", Kun = "", On = "ka" },
                new { Character = "夏", Romaji = "natsu", Meaning = "summer", Kun = "natsu", On = "ka" },
                new { Character = "家", Romaji = "ie", Meaning = "house", Kun = "ie", On = "ka" },
                new { Character = "歌", Romaji = "uta", Meaning = "song", Kun = "uta", On = "ka" },
                new { Character = "画", Romaji = "ga", Meaning = "picture", Kun = "", On = "ga" },
                new { Character = "回", Romaji = "kai", Meaning = "turn", Kun = "mawa(ru)", On = "kai" },
                new { Character = "会", Romaji = "kai", Meaning = "meeting", Kun = "a(u)", On = "kai" },
                new { Character = "海", Romaji = "umi", Meaning = "sea", Kun = "umi", On = "kai" },
                new { Character = "界", Romaji = "kai", Meaning = "world", Kun = "", On = "kai" },
                new { Character = "開", Romaji = "kai", Meaning = "open", Kun = "hira(ku)", On = "kai" },
                new { Character = "階", Romaji = "kai", Meaning = "floor", Kun = "", On = "kai" },
                new { Character = "外", Romaji = "gai", Meaning = "outside", Kun = "soto", On = "gai" },
                new { Character = "楽", Romaji = "raku", Meaning = "music", Kun = "tano(shii)", On = "raku" },
                new { Character = "活", Romaji = "katsu", Meaning = "active", Kun = "i(ki)", On = "katsu" }
            };

            foreach (var item in grade2Kanji)
            {
                kanjiList.Add(new Kanji
                {
                    Id = id++,
                    Character = item.Character,
                    Romaji = item.Romaji,
                    Meaning = item.Meaning,
                    KunYomi = item.Kun,
                    OnYomi = item.On,
                    Grade = 2,
                    StrokeCount = GetStrokeCount(item.Character),
                    Radical = GetRadical(item.Character),
                    Examples = GetExamples(item.Character)
                });
            }

            // For the remaining kanji to reach 1026, add placeholder data
            // In production, load from a JSON/CSV file
            var extraKanji = new[]
            {
                "愛", "案", "以", "位", "囲", "医", "委", "意", "育", "員",
                "飲", "右", "宇", "映", "英", "栄", "永", "泳", "衛", "易",
                "益", "液", "駅", "円", "延", "沿", "演", "炎", "煙", "猿",
                "王", "奥", "横", "屋", "億", "丘", "桜", "鉛", "荷", "夏"
            };

            foreach (var item in extraKanji.Take(800))
            {
                kanjiList.Add(new Kanji
                {
                    Id = id++,
                    Character = item.ToString(),
                    Romaji = GetRomajiForCharacter(item.ToString()),
                    Meaning = GetMeaningForCharacter(item.ToString()),
                    KunYomi = "Kun reading",
                    OnYomi = "On reading",
                    Grade = (id % 6) + 1,
                    StrokeCount = (id % 15) + 1,
                    Radical = "Radical",
                    Examples = new List<string> { "Example 1", "Example 2" }
                });
            }

            return kanjiList;
        }

        private static int GetStrokeCount(string character)
        {
            var strokeMap = new Dictionary<string, int>
            {
                { "一", 1 }, { "二", 2 }, { "三", 3 }, { "四", 5 }, { "五", 4 },
                { "六", 4 }, { "七", 2 }, { "八", 2 }, { "九", 2 }, { "十", 2 },
                { "百", 6 }, { "千", 3 }, { "万", 3 }, { "円", 4 }, { "年", 6 },
                { "月", 4 }, { "日", 4 }, { "時", 10 }, { "分", 4 }, { "火", 4 },
                { "水", 4 }, { "木", 4 }, { "金", 8 }, { "土", 3 }, { "空", 8 },
                { "林", 8 }, { "森", 12 }, { "山", 3 }, { "川", 3 }, { "田", 5 },
                { "口", 3 }, { "目", 5 }, { "耳", 6 }, { "手", 4 }, { "足", 7 },
                { "心", 4 }, { "力", 2 }, { "気", 4 }, { "男", 7 }, { "女", 3 },
                { "子", 3 }, { "父", 4 }, { "母", 5 }, { "兄", 5 }, { "弟", 7 },
                { "姉", 8 }, { "妹", 8 }, { "友", 4 }, { "人", 2 }, { "名", 6 },
                { "上", 3 }, { "下", 3 }, { "左", 5 }, { "右", 5 }, { "中", 4 },
                { "大", 3 }, { "小", 3 }, { "本", 5 }, { "字", 6 }, { "学", 8 },
                { "校", 10 }, { "生", 5 }, { "先", 6 }, { "王", 4 }, { "玉", 5 },
                { "車", 7 }, { "国", 8 }, { "園", 13 }, { "天", 4 }, { "地", 6 },
                { "星", 9 }, { "花", 7 }, { "草", 9 }, { "虫", 6 }, { "犬", 4 },
                { "猫", 11 }, { "魚", 11 }, { "鳥", 11 }, { "馬", 10 }, { "牛", 4 },
                { "引", 4 }, { "運", 12 }, { "雲", 12 }, { "遠", 13 }, { "何", 7 }
            };
            
            return strokeMap.GetValueOrDefault(character, 5);
        }

        private static string GetRadical(string character)
        {
            var radicalMap = new Dictionary<string, string>
            {
                { "一", "一" }, { "二", "二" }, { "三", "一" }, { "四", "囗" }, { "五", "二" },
                { "六", "八" }, { "七", "一" }, { "八", "八" }, { "九", "丿" }, { "十", "十" },
                { "百", "白" }, { "千", "十" }, { "万", "一" }, { "円", "冂" }, { "年", "干" },
                { "月", "月" }, { "日", "日" }, { "時", "日" }, { "分", "刀" }, { "火", "火" },
                { "水", "水" }, { "木", "木" }, { "金", "金" }, { "土", "土" }, { "空", "穴" },
                { "林", "木" }, { "森", "木" }, { "山", "山" }, { "川", "巛" }, { "田", "田" },
                { "口", "口" }, { "目", "目" }, { "耳", "耳" }, { "手", "手" }, { "足", "足" },
                { "心", "心" }, { "力", "力" }, { "気", "气" }, { "男", "田" }, { "女", "女" },
                { "子", "子" }, { "父", "父" }, { "母", "母" }, { "兄", "儿" }, { "弟", "弓" },
                { "姉", "女" }, { "妹", "女" }, { "友", "又" }, { "人", "人" }, { "名", "口" }
            };
            
            return radicalMap.GetValueOrDefault(character, "Unknown");
        }

        private static List<string> GetExamples(string character)
        {
            var examples = new Dictionary<string, List<string>>
            {
                { "一", new List<string> { "一つ (hitotsu) - one", "一日 (ichinichi) - one day" } },
                { "二", new List<string> { "二つ (futatsu) - two", "二月 (nigatsu) - February" } },
                { "三", new List<string> { "三つ (mittsu) - three", "三月 (sangatsu) - March" } },
                { "四", new List<string> { "四つ (yottsu) - four", "四月 (shigatsu) - April" } },
                { "五", new List<string> { "五つ (itsutsu) - five", "五月 (gogatsu) - May" } },
                { "人", new List<string> { "人 (hito) - person", "日本人 (nihonjin) - Japanese person" } },
                { "日", new List<string> { "日 (hi) - day", "今日 (kyou) - today" } },
                { "月", new List<string> { "月 (tsuki) - moon", "月曜日 (getsuyoubi) - Monday" } },
                { "年", new List<string> { "年 (toshi) - year", "今年 (kotoshi) - this year" } }
            };
            
            return examples.GetValueOrDefault(character, new List<string> { "Example 1", "Example 2" });
        }

        private static string GetRomajiForCharacter(string character)
        {
            var map = new Dictionary<string, string>
            {
                { "愛", "ai" }, { "案", "an" }, { "以", "i" }, { "位", "i" }, { "囲", "i" },
                { "医", "i" }, { "委", "i" }, { "意", "i" }, { "育", "iku" }, { "員", "in" },
                { "飲", "in" }, { "右", "migi" }, { "宇", "u" }, { "映", "ei" }, { "英", "ei" },
                { "栄", "ei" }, { "永", "ei" }, { "泳", "ei" }, { "衛", "ei" }, { "易", "eki" }
            };
            
            return map.GetValueOrDefault(character, "romaji");
        }

        private static string GetMeaningForCharacter(string character)
        {
            var map = new Dictionary<string, string>
            {
                { "愛", "love" }, { "案", "plan" }, { "以", "by means of" }, { "位", "rank" }, { "囲", "surround" },
                { "医", "medicine" }, { "委", "committee" }, { "意", "idea" }, { "育", "educate" }, { "員", "member" },
                { "飲", "drink" }, { "右", "right" }, { "宇", "universe" }, { "映", "reflect" }, { "英", "excellent" },
                { "栄", "prosper" }, { "永", "eternal" }, { "泳", "swim" }, { "衛", "defense" }, { "易", "easy" }
            };
            
            return map.GetValueOrDefault(character, "meaning");
        }
    }
}