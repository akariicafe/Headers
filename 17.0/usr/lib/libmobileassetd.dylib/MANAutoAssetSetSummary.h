@class NSString, MANAutoAssetSetStatus;

@interface MANAutoAssetSetSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) long long assetSetRepresentation;
@property (retain, nonatomic) MANAutoAssetSetStatus *setJobStatus;
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
+ (id)summaryPaddedHeader:(id)a0;
+ (id)assetSetRepresentationName:(long long)a0;

- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)summaryPadded:(id)a0;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)assetSetRepresentationName;
- (id)initWithDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withAssetSetRepresentation:(long long)a2 withSetJobStatus:(id)a3 withScheduledIntervalSecs:(long long)a4 withScheduledRemainingSecs:(long long)a5 withPushDelaySecs:(long long)a6 withActiveClientCount:(long long)a7 withActiveMonitorCount:(long long)a8 withMaximumClientCount:(long long)a9 withTotalClientCount:(long long)a10;

@end
