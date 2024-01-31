@class NSString;

@interface _UIOMenuPreparationAction : _UIOClientAction

@property (readonly, nonatomic) NSString *identifier;

- (void)handleClientActionToOverlayService:(id)a0;
- (id)initWithMenu:(id)a0 responseHandler:(id /* block */)a1;

@end
