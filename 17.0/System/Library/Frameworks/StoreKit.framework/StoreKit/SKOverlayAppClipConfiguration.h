@class NSString, ASOOverlayAppClipConfiguration;

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration

@property (readonly, retain, nonatomic) ASOOverlayAppClipConfiguration *_backing;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (nonatomic) long long position;

- (void)setPosition:(long long)a0;
- (long long)position;
- (id)_init;
- (id)initWithPosition:(long long)a0;
- (id)campaignToken;
- (id)additionalValueForKey:(id)a0;
- (id)initWithBacking:(id)a0;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;
- (void)setCampaignToken:(id)a0;

@end
