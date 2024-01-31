@class NSString;

@interface DTCompanionControlServiceV2 : DTXService <DTCompanionControlServiceV2API>

@property (class) struct { id *x0; id *x1; id *x2; id *x3; id *x4; id *x5; id *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; } sockPuppetSymbols;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;
+ (void)instantiateServiceWithChannel:(id)a0;

@end
