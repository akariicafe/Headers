@class NSSet;

@interface _SBSystemApertureBackgroundActivitySuppressionAssertion : BSSimpleAssertion

@property (readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 backgroundActivitiesToSuppress:(id)a2 invalidationBlock:(id /* block */)a3;

@end
