@class NSString;

@interface IMSingletonOverride : NSObject <IMSingletonOverriding>

@property (weak) id overriddenSingleton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didOverrideSingleton:(id)a0;
- (BOOL)shouldInvokeSelector:(SEL)a0 onSingleton:(id)a1;

@end
