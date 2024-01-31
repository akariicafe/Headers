@class NSURL;

@interface SFSpeechLanguageModelConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *languageModel;
@property (readonly, copy, nonatomic) NSURL *vocabulary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLanguageModel:(id)a0;
- (id)initWithLanguageModel:(id)a0 vocabulary:(id)a1;

@end
