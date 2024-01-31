@interface MANAutoAssetControlStatisticsByCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long interestInContent;
@property (nonatomic) long long checkForNewer;
@property (nonatomic) long long determineIfAvailable;
@property (nonatomic) long long currentStatus;
@property (nonatomic) long long lockContent;
@property (nonatomic) long long continueLockUsage;
@property (nonatomic) long long endLockUsage;
@property (nonatomic) long long endPreviousLocks;
@property (nonatomic) long long endAllPreviousLocks;
@property (nonatomic) long long eliminateAllForSelector;
@property (nonatomic) long long eliminateAllForAssetType;
@property (nonatomic) long long eliminatePromotedNeverLockedForSelector;
@property (nonatomic) long long stageDetermineAllAvailable;
@property (nonatomic) long long stageDownloadAll;
@property (nonatomic) long long stagePurgeAll;

- (void)incrementForClientRequestMessage:(id)a0;
- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithInitialValue:(long long)a0;
- (id)description;
- (long long)total;
- (id)initWithCoder:(id)a0;

@end
