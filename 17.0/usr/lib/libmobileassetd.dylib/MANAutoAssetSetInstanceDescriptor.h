@class NSString, NSArray;

@interface MANAutoAssetSetInstanceDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *atomicInstanceEntries;
@property (nonatomic) BOOL isFullyDownloaded;
@property (nonatomic) BOOL neverBeenLocked;
@property (nonatomic) BOOL downloadUserInitiated;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (nonatomic) BOOL stagedPriorToAvailable;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withAtomicInstanceEntries:(id)a2 withFullyDownloaded:(BOOL)a3 withNeverBeenLocked:(BOOL)a4 withDownloadUserInitiated:(BOOL)a5 withDownloadedNetworkBytes:(long long)a6 withDownloadedFilesystemBytes:(long long)a7 withStagedPriorToAvailable:(BOOL)a8;

@end
