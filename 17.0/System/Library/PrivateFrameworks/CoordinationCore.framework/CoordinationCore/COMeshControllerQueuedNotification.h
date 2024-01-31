@class COMeshNotification, NSString, COMeshNode;

@interface COMeshControllerQueuedNotification : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshNotification *notification;
@property (readonly, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)command;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotification:(id)a0 destination:(id)a1;
- (void)invokeCallbackWithError:(id)a0;

@end
