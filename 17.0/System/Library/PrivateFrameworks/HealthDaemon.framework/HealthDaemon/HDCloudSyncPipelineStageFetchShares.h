@class NSArray;

@interface HDCloudSyncPipelineStageFetchShares : HDCloudSyncPipelineStage

@property (nonatomic) BOOL fetchAllShares;
@property (readonly, copy, nonatomic) NSArray *shares;

- (void)main;
- (void).cxx_destruct;

@end
