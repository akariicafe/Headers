@interface IMCloudSyncNotifier : NSObject <SyncNotifying>

- (void)notifyClientsOfProgress:(id)a0;
- (void)notifyClientsOfState:(id)a0;

@end
