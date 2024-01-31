@interface ManagedSettings.SubscriptionCenter : _TtCs12_SwiftObject <ManagedSettings.ManagedSettingsSubscriberProxy> {
    void /* unknown type, empty encoding */ currentConnection;
    void /* unknown type, empty encoding */ connectionLock;
    void /* unknown type, empty encoding */ effectiveSubject;
    void /* unknown type, empty encoding */ effectiveSubscriptions;
    void /* unknown type, empty encoding */ subscriptionLock;
}

- (void)effectiveSettingsChangedForGroups:(id)a0;

@end
