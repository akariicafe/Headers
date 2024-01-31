@class NSLocale;

@interface _LTTextLanguageDetectorScorerItem : NSObject

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long wordCount;

- (double)score;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 confidence:(double)a1 wordCount:(long long)a2;

@end
