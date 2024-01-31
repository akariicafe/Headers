@class _SwiftDriverManager, NSMutableArray;

@interface DriverManager : NSObject {
    _SwiftDriverManager *_swiftManager;
    NSMutableArray *_observers;
}

+ (id)sharedManager;

- (void)removeObserver:(id)a0;
- (void)refresh;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)driverApprovalStatesForThirdPartyApp:(id)a0;
- (void)setDriverState:(id)a0 approved:(BOOL)a1;
- (long long)driverCount;
- (long long)driverCountForAppID:(id)a0;
- (id)initWithSwiftManager:(id)a0;
- (long long)thirdPartyDriverCount;

@end
