@class NSDictionary, GEOComposedRouteStep;

@interface MNTransitStepInstruction : MNTransitInstruction

@property (readonly, nonatomic) GEOComposedRouteStep *step;
@property (readonly, nonatomic) NSDictionary *overridenInstructionsMapping;

+ (id)instructionForStep:(id)a0 context:(long long)a1;
+ (id)instructionForStep:(id)a0 overrides:(id)a1 context:(long long)a2;

- (void).cxx_destruct;
- (id)instructionSet;
- (id)initWithStep:(id)a0 overrides:(id)a1 context:(long long)a2;

@end
