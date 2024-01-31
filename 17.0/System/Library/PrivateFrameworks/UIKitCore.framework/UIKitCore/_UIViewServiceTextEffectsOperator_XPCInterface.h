@class NSString;

@interface _UIViewServiceTextEffectsOperator_XPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (id)connectionInvocation;
- (id)connectionProtocol;
- (SEL)connectionSelector;
- (id)hostObjectInterface;

@end
