@protocol CNKScreenSharingStateMonitorProtocol;

@interface CNKScreenSharingStateMonitorFactory : NSObject

@property (nonatomic, readonly) id<CNKScreenSharingStateMonitorProtocol> sharedMonitor;

- (id)init;
- (id)makeScreenSharingStateMonitorWithCall:(id)a0;

@end
