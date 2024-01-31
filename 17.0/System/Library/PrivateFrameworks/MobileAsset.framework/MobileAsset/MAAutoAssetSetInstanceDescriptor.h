@class NSString, NSArray;

@interface MAAutoAssetSetInstanceDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) NSArray *atomicInstanceEntries;
@property (readonly, nonatomic) BOOL isFullyDownloaded;
@property (readonly, nonatomic) BOOL neverBeenLocked;
@property (readonly, nonatomic) BOOL downloadUserInitiated;
@property (readonly, nonatomic) long long downloadedNetworkBytes;
@property (readonly, nonatomic) long long downloadedFilesystemBytes;
@property (readonly, nonatomic) BOOL stagedPriorToAvailable;

+ (id)paddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;
+ (id)newMaxColumnStrings;
+ (id)paddedBanner:(id)a0;
+ (id)paddedHeader:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)padded:(id)a0;
- (void)buildMaxColumnStrings:(id)a0;
- (id)description:(BOOL)a0;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withAtomicInstanceEntries:(id)a2 withFullyDownloaded:(BOOL)a3 withNeverBeenLocked:(BOOL)a4 withDownloadUserInitiated:(BOOL)a5 withDownloadedNetworkBytes:(long long)a6 withDownloadedFilesystemBytes:(long long)a7 withStagedPriorToAvailable:(BOOL)a8;

@end
