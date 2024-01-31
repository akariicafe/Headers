@class NSUUID, HDCloudSyncOperationConfiguration, HDProfile, NSProgress, HDCloudSyncCloudState, NSString;

@interface HDCloudSyncOperation : NSObject <NSProgressReporting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _onSuccess;
    id /* block */ _onError;
    double _startTime;
    double _endTime;
    NSString *_loggingPrefix;
}

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain) HDCloudSyncCloudState *cloudState;
@property (copy) id /* block */ onSuccess;
@property (copy) id /* block */ onError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)progressCount;
+ (BOOL)shouldFailOnXPCActivityDeferral;
+ (BOOL)shouldProduceOperationAnalytics;
+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;
+ (void)unitTest_clearAllOperationHandlers;
+ (id /* block */)unitTest_operationHandler;
+ (void)unitTest_setOperationHandler:(id /* block */)a0;

- (id)init;
- (void)main;
- (void)start;
- (void)skip;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)analyticsDictionary;
- (id)asPipelineStage;
- (void)chainFromOperation:(id)a0 transitionHandler:(id /* block */)a1;
- (void)delegateToOperation:(id)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithPreceedingOperation:(id)a0 transitionHandler:(id /* block */)a1;
- (id)operationIgnoringErrors;
- (id)operationWithRunCondition:(id /* block */)a0;
- (void)updateCompletedProgressCount:(long long)a0;

@end
