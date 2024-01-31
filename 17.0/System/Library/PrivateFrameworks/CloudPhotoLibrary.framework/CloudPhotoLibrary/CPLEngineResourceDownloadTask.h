@class CPLRecordTarget, CPLResource, NSString, CPLTransportScopeMapping, NSData, NSMutableArray, CPLPlaceholderRecord;
@protocol CPLEngineTransportResourcesDownloadTask;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    NSMutableArray *_stateProgressDates;
    NSString *_activeQueuesStatusAtEnqueingTime;
    unsigned long long _preemptingCount;
}

@property (readonly, nonatomic) CPLResource *cloudResource;
@property (readonly, nonatomic) CPLPlaceholderRecord *cloudRecord;
@property (readonly, nonatomic) CPLRecordTarget *target;
@property (retain, nonatomic) CPLTransportScopeMapping *transportScopeMapping;
@property (retain, nonatomic) NSData *transportScope;
@property (nonatomic) unsigned long long taskIdentifierForQueue;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic, getter=isCancelledByEngine) BOOL cancelledByEngine;
@property (weak, nonatomic) id<CPLEngineTransportResourcesDownloadTask> transportTask;
@property (readonly, copy, nonatomic) id /* block */ launchHandler;
@property (readonly, copy, nonatomic) id /* block */ cancelHandler;
@property (readonly, copy, nonatomic) id /* block */ didStartHandler;
@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *transportIdentifier;
@property (readonly, nonatomic) BOOL willGenerateReport;

+ (void)initialize;
+ (unsigned long long)maximumResourceDownloadSizeForResourceType:(unsigned long long)a0;

- (void)launch;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)associateCloudResource:(id)a0 ofRecord:(id)a1;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1 target:(id)a2 launchHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4 didStartHandler:(id /* block */)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)noteActiveQueuesStatusAtEnqueingTime:(id)a0;
- (void)noteStateDidProgress:(unsigned long long)a0;
- (void)noteTaskHasBeenPreempted;

@end
