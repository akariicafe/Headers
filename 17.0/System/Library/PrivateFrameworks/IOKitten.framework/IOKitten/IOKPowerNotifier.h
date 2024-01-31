@protocol IOKPowerNotifierDelegate;

@interface IOKPowerNotifier : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _connection;
    unsigned int _notifier;
}

@property (weak, nonatomic) id<IOKPowerNotifierDelegate> delegate;

- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)a0 andArgument:(long long)a1;
- (void)systemWillNotSleep;
- (void)systemWillPowerOn;

@end
