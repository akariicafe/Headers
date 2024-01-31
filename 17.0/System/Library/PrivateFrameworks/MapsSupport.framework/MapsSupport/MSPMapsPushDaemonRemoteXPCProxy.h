@class NSObject;

@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject

@property (weak, nonatomic) NSObject *target;

- (id)initWithObserver:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
