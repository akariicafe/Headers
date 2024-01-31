@class HMDBackingStoreTransactionOptions, NSString, NSMutableArray, HMDBackingStore;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>

@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) BOOL committed;
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sort:(id)a0;
+ (id)logCategory;

- (void)save:(id /* block */)a0;
- (void)run:(id /* block */)a0;
- (void)run;
- (id)logIdentifier;
- (void)save;
- (void).cxx_destruct;
- (void)add:(id)a0;
- (void)dumpDebug;
- (void)dumpDebug:(id)a0;
- (void)runWithoutSave:(id /* block */)a0;
- (void)add:(id)a0 withMessage:(id)a1;
- (void)addObjects:(id)a0;
- (void)dumpWithVerbosity:(BOOL)a0 prefix:(id)a1 logType:(unsigned char)a2;
- (id)initWithBackingStore:(id)a0 options:(id)a1 label:(id)a2;

@end
