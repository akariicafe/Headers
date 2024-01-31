@class NSString, IDSBatchIDQueryController;

@interface PKIDSBatchIDQueryControllerWrapper : NSObject <IDSBatchIDQueryControllerDelegate> {
    id /* block */ _completion;
    IDSBatchIDQueryController *_batchIDQueryController;
    NSString *_service;
    BOOL _hasRunQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)reachableDestinationsForDestination:(id)a0 service:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

@end
