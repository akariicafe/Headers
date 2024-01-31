@interface RTWatchWristStateManagerWristStateChangedNotification : RTNotification

@property (readonly, nonatomic) unsigned long long wristState;

- (id)initWithWristState:(unsigned long long)a0;

@end
