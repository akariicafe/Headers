@class NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetHistoryTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *protectionQueue;
@property (readonly, nonatomic) long long historyType;
@property (nonatomic) BOOL loadedFromPersistedState;
@property (nonatomic) long long currentBucketFileIndex;
@property (nonatomic) long long currentBucketFilesystemBytes;
@property (nonatomic) long long maximumBucketFilesystemBytes;

+ (id)currentTime;
+ (id)newBucketFilename:(long long)a0 forBucketIndex:(long long)a1;
+ (id)operationName:(long long)a0;
+ (id)paddedNameForClient:(id)a0;
+ (id)paddedNameForErrorCode:(id)a0;
+ (id)paddedNameForErrorDomain:(id)a0;
+ (id)paddedNameForHistoryLayer:(long long)a0;
+ (id)selectorNameForSelector:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)loadPersistedState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)historyTypeName;
- (void)loadBucketIndex;
- (void)createBucketIndexFile;
- (void)createEmptyBucketFileForIndex:(long long)a0 settingCurrentBucketBytes:(BOOL)a1;
- (id)initForHistoryType:(long long)a0 withMaximumFilesystemBytes:(long long)a1 usingProtectionQueue:(id)a2;
- (BOOL)makeSureHistoryDirectoryExists;
- (id)newBucketIndexFilename;
- (long long)recordFormattedHistoryEntry:(id)a0 toBucketFilename:(id)a1 settingCurrentBucketBytes:(BOOL)a2;
- (void)recordHistoryEntry:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 fromLayer:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5 usageCount:(long long)a6 forClientDomainName:(id)a7 forAssetSetIdentifier:(id)a8 forAtomicInstance:(id)a9 failingWithError:(id)a10;
- (void)verifyAllOtherBucketFilesExist;

@end
