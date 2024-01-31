@class NSString, BKSHIDEventAuthenticationMessage;

@interface _UIOMenuLeafPerformAction : _UIOClientAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *pasteAuthenticationMessage;

- (void)handleClientActionToOverlayService:(id)a0;
- (id)initWithMenuElement:(id)a0 pasteAuthenticationMesage:(id)a1 responseHandler:(id /* block */)a2;

@end
