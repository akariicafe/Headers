@class NSDictionary, DMFCommunicationPolicyMonitor;

@interface SBCommunicationPolicyManager : NSObject {
    NSDictionary *_policiesByBundleIdentifier;
    DMFCommunicationPolicyMonitor *_communicationPolicyMonitor;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)a0;

@end
