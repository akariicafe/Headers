@class NSSet, NSMutableArray, NSMutableDictionary;

@interface HDCloudSyncStateSyncOperation : HDCloudSyncOperation {
    NSMutableArray *_recordsToBeSaved;
    NSSet *_containers;
    NSMutableDictionary *_domainToEntityClassMapping;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 containers:(id)a1;

@end
