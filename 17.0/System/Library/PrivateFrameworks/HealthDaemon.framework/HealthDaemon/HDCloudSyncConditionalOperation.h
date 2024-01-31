@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;
@property (copy) id /* block */ shouldRunHandler;

+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void)skip;
- (id)description;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2 shouldRunHandler:(id /* block */)a3;

@end
