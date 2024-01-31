@class NSString, NSArray, NSMutableArray;

@interface MANAutoAssetSetOverview : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSMutableArray *downloadedAtomicInstances;
@property (retain, nonatomic) NSString *discoveredAtomicInstance;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withLatestDownloadedAtomicInstance:(id)a3 withDownloadedAtomicInstances:(id)a4 withDiscoveredAtomicInstance:(id)a5 withActiveClientCount:(long long)a6 withActiveMonitorCount:(long long)a7 withMaximumClientCount:(long long)a8 withTotalClientCount:(long long)a9;

@end
