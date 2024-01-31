@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (id)_unitTestBundleIDsByContainerID:(id)a0;

@end
