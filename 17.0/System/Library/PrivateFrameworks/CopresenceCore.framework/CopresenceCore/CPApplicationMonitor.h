@interface CPApplicationMonitor : NSObject <CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ appPolicyManager;
    void /* unknown type, empty encoding */ applicationController;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ appVisibilityMonitor;
}

- (id)init;
- (void)dealloc;
- (id)initWithApplicationController:(id)a0 queue:(id)a1;
- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (void).cxx_destruct;

@end
