@protocol QLPreviewControllerStateProtocolHostOnly;

@interface QLStateManagerProxy : NSObject

@property (weak) id<QLPreviewControllerStateProtocolHostOnly> stateManager;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dropMethod;

@end
