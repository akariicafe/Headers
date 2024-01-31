@interface _SBDeviceApplicationSceneHandleSnapshottingAssertion : BSSimpleAssertion

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) unsigned long long renderId;

- (id)initWithIdentifier:(id)a0 forReason:(id)a1 contextId:(unsigned int)a2 renderId:(unsigned long long)a3 invalidationBlock:(id /* block */)a4;

@end
