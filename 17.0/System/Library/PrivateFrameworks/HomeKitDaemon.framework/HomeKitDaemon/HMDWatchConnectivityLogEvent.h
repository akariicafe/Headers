@interface HMDWatchConnectivityLogEvent : HMMLogEvent

@property (nonatomic) unsigned long long watchAddedNotificationCount;
@property (nonatomic) unsigned long long watchRemovedNotificationCount;
@property (nonatomic, getter=isReportComplete) BOOL reportComplete;

- (id)init;

@end
