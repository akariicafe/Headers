@class NSNumber;

@interface PXCPLStatusSettings : PXSettings

@property (nonatomic) long long cloudQuotaOfferLevel;
@property (nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;
@property (retain, nonatomic) NSNumber *resumeOverrideHours;
@property (retain, nonatomic) NSNumber *shouldHideMockStatusWarning;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
