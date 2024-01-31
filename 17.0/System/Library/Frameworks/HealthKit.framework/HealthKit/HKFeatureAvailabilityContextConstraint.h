@interface HKFeatureAvailabilityContextConstraint : NSObject

@property (readonly, nonatomic) id /* block */ acceptsContext;

+ (id)allContexts;
+ (id)onlySomeContexts:(id)a0;

- (void).cxx_destruct;
- (BOOL)acceptsContext:(id)a0;
- (id)initWithAcceptsContext:(id /* block */)a0;

@end
