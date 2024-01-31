@class NSArray, NSString, MSVLyricsSection, NSAttributedString, MSVLyricsWord;

@interface MSVLyricsLine : MSVLyricsTextElement

@property (nonatomic, getter=isInstrumentalBreak) BOOL instrumentalBreak;
@property (nonatomic) long long lineIndex;
@property (nonatomic) long long originalLineIndex;
@property (weak, nonatomic) MSVLyricsSection *parentSection;
@property (retain, nonatomic) MSVLyricsLine *nextLine;
@property (retain, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *translationKey;
@property (nonatomic) BOOL hasBackgroundVocal;
@property (retain, nonatomic) MSVLyricsWord *backgroundVocals;
@property (copy, nonatomic) NSAttributedString *primaryVocalText;

- (id)init;
- (id)description;
- (id)agent;
- (void).cxx_destruct;
- (BOOL)containsTimeOffset:(double)a0 withErrorMargin:(double)a1;

@end
