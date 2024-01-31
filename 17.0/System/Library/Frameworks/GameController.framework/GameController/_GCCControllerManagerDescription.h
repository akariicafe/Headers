@class NSString;

@interface _GCCControllerManagerDescription : _GCImplicitIPCObjectDescription <_GCHIDEventSourceDescription>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (id)initWithControllerManager:(id)a0;
- (id)materializeWithContext:(id)a0;

@end
