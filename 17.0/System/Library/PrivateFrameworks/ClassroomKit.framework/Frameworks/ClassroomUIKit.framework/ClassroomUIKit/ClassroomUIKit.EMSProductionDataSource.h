@interface ClassroomUIKit.EMSProductionDataSource : NSObject <CRKStudentDaemonProxyObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_rosterProviderContainer;
    void /* unknown type, empty encoding */ rosterSubject;
    void /* unknown type, empty encoding */ historySubject;
    void /* unknown type, empty encoding */ studentProxy;
    void /* unknown type, empty encoding */ currentOperation;
    void /* unknown type, empty encoding */ rosterPassthroughSubscription;
    void /* unknown type, empty encoding */ historySubscriptionCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_roster;
    void /* unknown type, empty encoding */ $__lazy_storage_$_history;
}

- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSignInHistoryOperationDidFinishWithOperation:(id)a0;

@end
