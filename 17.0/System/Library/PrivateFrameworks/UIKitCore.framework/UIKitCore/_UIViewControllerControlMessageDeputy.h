@class NSString;

@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)XPCInterface;
+ (id)proxyWithTarget:(id)a0;

- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)a0;

@end
