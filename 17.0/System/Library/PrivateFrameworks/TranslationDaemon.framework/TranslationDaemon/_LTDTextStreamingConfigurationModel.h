@interface _LTDTextStreamingConfigurationModel : NSObject

@property (readonly, nonatomic) double minTimeBetweenTranslations;
@property (readonly, nonatomic) double maxTimeBetweenTranslations;
@property (readonly, nonatomic) double userIdleTime;
@property (readonly, nonatomic) long long maxPartialTranslationAttempts;
@property (readonly, nonatomic) long long minNumberOfCharactersForTranslation;

- (id)initWithDictionary:(id)a0;

@end
