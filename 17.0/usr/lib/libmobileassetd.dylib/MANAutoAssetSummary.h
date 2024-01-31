@class MAAutoAssetSelector, MAAutoAssetStatus;

@interface MANAutoAssetSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) long long assetRepresentation;
@property (nonatomic) BOOL assetWasPatched;
@property (nonatomic) BOOL assetIsStaged;
@property (retain, nonatomic) MAAutoAssetStatus *jobStatus;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

+ (id)summaryPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;
+ (id)summaryPaddedBanner:(id)a0;
+ (id)summaryNewMaxColumnStrings;
+ (id)assetRepresentationName:(long long)a0;
+ (id)summaryPaddedHeader:(id)a0;

- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)summaryPadded:(id)a0;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)assetRepresentationName;
- (id)initWithAssetSelector:(id)a0 withAssetRepresentation:(long long)a1 withAssetWasPatched:(BOOL)a2 withAssetIsStaged:(BOOL)a3 withJobStatus:(id)a4 withScheduledIntervalSecs:(long long)a5 withScheduledRemainingSecs:(long long)a6 withPushDelaySecs:(long long)a7 withActiveClientCount:(long long)a8 withActiveMonitorCount:(long long)a9 withMaximumClientCount:(long long)a10 withTotalClientCount:(long long)a11;

@end
