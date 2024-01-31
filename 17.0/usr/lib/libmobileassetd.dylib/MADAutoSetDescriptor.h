@class NSString, NSArray, NSURL, NSDate;

@interface MADAutoSetDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (readonly, retain, nonatomic) NSString *discoveredAtomicInstance;
@property (retain, nonatomic) NSArray *discoveredAtomicEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSArray *latestDowloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSString *downloadedCatalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *downloadedCatalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *downloadedCatalogLastTimeChecked;
@property (retain, nonatomic) NSDate *downloadedCatalogPostedDate;
@property (nonatomic) BOOL isOnFilesystem;
@property (nonatomic) BOOL onFilesystemIncomplete;
@property (nonatomic) BOOL isDiscoveredFullyDownloaded;
@property (nonatomic) BOOL neverBeenLocked;
@property (nonatomic) BOOL downloadUserInitiated;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (nonatomic) BOOL stagedPriorToAvailable;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)newIdentityName;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withDiscoveredAtomicInstance:(id)a2 withDiscoveredAtomicEntries:(id)a3;
- (id)newSummaryWithoutEntryID;

@end
