@protocol WFSettings;

@interface WFRequestFormattingRules : NSObject

@property (readonly, nonatomic) id<WFSettings> settings;

+ (BOOL)aqiEnabledByRules:(id)a0 forLocation:(id)a1;

- (long long)locationNumDecimalsOfPrecision;
- (void).cxx_destruct;
- (BOOL)aqiEnabledForCountryCode:(id)a0;
- (id)initWithSettings:(id)a0;

@end
