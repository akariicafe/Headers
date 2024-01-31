@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) long long historyLimit;

- (id)init;
- (id)changeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;
- (void)addChangeDetails:(id)a0;
- (id)initWithChangeHistoryLimit:(long long)a0;
- (void).cxx_destruct;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(long long)a0 toDataSourceIdentifier:(long long)a1;

@end
