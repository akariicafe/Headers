@interface EMFQueryLogger : NSObject

@property (readonly, nonatomic) struct __EmojiLocaleDataWrapper { } *localeData;

+ (id)documentWeightsStringFromQueryResult:(id)a0 usingLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1;
+ (id)overriddenResultsStringFromQueryResult:(id)a0 usingLocaleData:(struct __EmojiLocaleDataWrapper { } *)a1;

- (void)dealloc;
- (void)logQueryResult:(id)a0;
- (id)initWithEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a0;

@end
