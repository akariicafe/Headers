@class NSString, NSArray;

@interface MAAutoAssetSetOverview : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSArray *downloadedAtomicInstances;
@property (readonly, retain, nonatomic) NSString *discoveredAtomicInstance;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

+ (id)overviewNewMaxColumnStrings;
+ (id)overviewPaddedBanner:(id)a0;
+ (id)overviewPaddedHeader:(id)a0;
+ (id)overviewPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)overviewPadded:(id)a0;
- (id)_entry_string_to_use:(long long)a0;
- (id)description:(BOOL)a0;
- (id)initWithDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withLatestDownloadedAtomicInstance:(id)a3 withDownloadedAtomicInstances:(id)a4 withDiscoveredAtomicInstance:(id)a5 withActiveClientCount:(long long)a6 withActiveMonitorCount:(long long)a7 withMaximumClientCount:(long long)a8 withTotalClientCount:(long long)a9;
- (void)overviewBuildMaxColumnStrings:(id)a0;

@end
