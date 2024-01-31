@class NSString, NSIndexSet, NSLocale;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) unsigned int wordID;
@property (nonatomic) double recognitionScore;
@property (nonatomic) double combinedScore;
@property (nonatomic) double alignmentScore;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) unsigned long long inputSources;
@property (copy, nonatomic) NSLocale *recognizerSourceLocale;
@property (nonatomic) long long substrokeCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)setProperties:(unsigned long long)a0;
- (void)setString:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setWordID:(unsigned int)a0;
- (void)setCombinedScore:(double)a0;
- (void)setAlignmentScore:(double)a0;
- (void)setInputSources:(unsigned long long)a0;
- (void)setRecognitionScore:(double)a0;
- (void)setRecognizerSourceLocale:(id)a0;
- (void)setStrokeIndexes:(id)a0;
- (void)setSubstrokeCount:(long long)a0;

@end
