@interface NewsUI2.TodayFeedQuerySidecar : _TtCs12_SwiftObject <FCForYouQuerySidecar> {
    void /* unknown type, empty encoding */ tagController;
    void /* unknown type, empty encoding */ localChannelsProvider;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ todayServiceConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localNewsChannelIDs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newspaperChannelIDs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_introToSportsTopicIDs;
}

- (id)additionalChannelsToQuery;
- (id)additionalSectionIDsToQueryForChannel:(id)a0;
- (id)additionalTopicsToQuery;
- (BOOL)shouldIncludePaidFeedForChannel:(id)a0;

@end
