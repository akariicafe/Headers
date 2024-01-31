@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {
    FTRegConnectionHandler *_connectionHandler;
    struct { unsigned char listeningForNotifications : 1; } _monitorFlags;
}

@property (nonatomic) long long serviceType;
@property (retain, nonatomic) IMServiceImpl *service;
@property (readonly, retain, nonatomic) NSArray *activeAccounts;

- (void)dealloc;
- (id)initWithServiceType:(long long)a0;
- (void).cxx_destruct;
- (void)_stopListeningForNotifications;
- (void)_handleDaemonConnected:(id)a0;
- (void)_startListeningForNotifications;
- (id)logName;
- (id)_activeAccounts;
- (BOOL)_shouldHandleAccountNofication:(id)a0;
- (void)_handleAccountNotification:(id)a0;
- (void)_updateAccountState:(BOOL)a0;

@end
