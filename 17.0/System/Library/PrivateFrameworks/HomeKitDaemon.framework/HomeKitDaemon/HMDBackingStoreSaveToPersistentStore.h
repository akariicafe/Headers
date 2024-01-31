@class NSString, HMDHomeManager;

@interface HMDBackingStoreSaveToPersistentStore : HMDBackingStoreOperation

@property (readonly, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL incrementGeneration;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 reason:(id)a1 incrementGeneration:(BOOL)a2;
- (id)mainReturningError;

@end
