@interface _SwiftDriverManager : NSObject {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ launchServicesQueue;
    void /* unknown type, empty encoding */ observerLock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ driverApprovalStatesLock;
    void /* unknown type, empty encoding */ _driverApprovalStates;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)refresh;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)driverApprovalStatesForThirdPartyApp:(id)a0;
- (void)setDriverState:(id)a0 approved:(BOOL)a1;
- (long long)driverCount;
- (long long)driverCountForAppID:(id)a0;
- (long long)thirdPartyDriverCount;

@end
