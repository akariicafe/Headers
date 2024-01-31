@class CKContainer, NSObject;
@protocol OS_dispatch_queue;

@interface DRSTaskingCloudKitHelper : NSObject

@property (readonly, nonatomic) CKContainer *_targetContainer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)prodContainerHelper;
+ (id)sandboxContainerHelper;
+ (id)taskingDeviceMetadata;

- (id)initWithContainer:(id)a0;
- (id)_operationWithFunctionName:(id)a0;
- (void)reportTaskingConfigReceipt:(id)a0 uuidString:(id)a1 receiptResult:(id)a2 transaction:(id)a3 completionHandler:(id /* block */)a4;
- (void)reportTaskingConfigCompletion:(id)a0 uuidString:(id)a1 completionType:(id)a2 completionDescription:(id)a3 activeDuration:(double)a4 transaction:(id)a5 completionHandler:(id /* block */)a6;
- (void)reportTaskingSystemMessageReceipt:(id)a0 messageType:(id)a1 channelType:(id)a2 channelEnvironment:(id)a3 dateBroadcast:(id)a4 dateReceived:(id)a5 transaction:(id)a6 completionHandler:(id /* block */)a7;
- (void).cxx_destruct;
- (void)_recordPBMessage:(id)a0 forFunction:(id)a1;
- (id)_taskingConfigMetadataForTeamID:(id)a0 uuidString:(id)a1;
- (void)_submitOperationWithName:(id)a0 requestObject:(id)a1 completionBlock:(id /* block */)a2;

@end
