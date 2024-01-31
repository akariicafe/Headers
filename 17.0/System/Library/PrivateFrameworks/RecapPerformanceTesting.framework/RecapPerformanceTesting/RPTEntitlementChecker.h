@class LSBundleRecord;

@interface RPTEntitlementChecker : NSObject

@property (class, readonly, nonatomic) RPTEntitlementChecker *checkerForCurrentProcess;

@property (retain, nonatomic) LSBundleRecord *bundleRecord;

- (BOOL)checkWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithBundleRecord:(id)a0;

@end
