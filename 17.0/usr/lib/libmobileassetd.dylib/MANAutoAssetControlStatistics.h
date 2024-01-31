@class MANAutoAssetControlStatisticsBySize, MANAutoAssetControlStatisticsByCommand;

@interface MANAutoAssetControlStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MANAutoAssetControlStatisticsByCommand *totalClientRequests;
@property (retain, nonatomic) MANAutoAssetControlStatisticsByCommand *totalClientRepliesSuccess;
@property (retain, nonatomic) MANAutoAssetControlStatisticsByCommand *totalClientRepliesFailure;
@property (retain, nonatomic) MANAutoAssetControlStatisticsByCommand *totalQueuedClientRequests;
@property (retain, nonatomic) MANAutoAssetControlStatisticsByCommand *totalDequeuedClientRequests;
@property (nonatomic) long long totalAutoAssetJobsStarted;
@property (nonatomic) long long totalAutoJobsFinished;
@property (nonatomic) long long totalStagerDetermineJobsStarted;
@property (nonatomic) long long totalStagerDetermineJobsFinished;
@property (nonatomic) long long totalStagerDownloadJobsStarted;
@property (nonatomic) long long totalStagerDownloadJobsFinished;
@property (nonatomic) long long totalResumedInFlightJobs;
@property (nonatomic) long long totalSchedulerTriggeredJobs;
@property (nonatomic) long long totalFailuresToStartJobs;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *previouslyDownloaded;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *totalDownloaded;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *totalStaged;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *totalUnstaged;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *totalPromoted;
@property (retain, nonatomic) MANAutoAssetControlStatisticsBySize *totalRemoved;
@property (nonatomic) long long finishedJobSchedulerNetworkFailure;
@property (nonatomic) long long finishedJobSchedulerNotNetworkRelated;
@property (nonatomic) long long finishedJobClientNetworkFailure;
@property (nonatomic) long long finishedJobClientNotNetworkRelated;
@property (nonatomic) BOOL garbageCollectionPerformed;
@property (nonatomic) BOOL garbageCollectionReclaimSpace;
@property (nonatomic) long long garbageCollectionTotalReclaimedSpace;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetCount;
@property (nonatomic) long long garbageCollectionReclaimedV2AssetSpace;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedUnlockedSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedOverridableSpace;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveCount;
@property (nonatomic) long long garbageCollectionReclaimedLockedNeverRemoveSpace;
@property (nonatomic) long long garbageCollectionReclaimedStagedCount;
@property (nonatomic) long long garbageCollectionReclaimedStagedSpace;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedCount;
@property (nonatomic) long long garbageCollectionReclaimedMetadataBlockedSpace;

+ (id)allocStringForBytes:(long long)a0;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithInitialValue:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
