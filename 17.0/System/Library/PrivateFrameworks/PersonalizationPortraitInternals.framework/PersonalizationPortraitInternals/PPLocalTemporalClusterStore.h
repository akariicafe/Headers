@class PPTemporalClusterStorage;

@interface PPLocalTemporalClusterStore : NSObject {
    PPTemporalClusterStorage *_storage;
}

+ (id)defaultStore;

- (id)init;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)rankedTemporalClusterForStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
