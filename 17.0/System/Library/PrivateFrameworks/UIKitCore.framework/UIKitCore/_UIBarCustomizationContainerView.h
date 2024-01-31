@protocol _UITraitEnvironmentInternal;

@interface _UIBarCustomizationContainerView : UIView

@property (weak, nonatomic) id<_UITraitEnvironmentInternal> parentTraitEnvironment;
@property (copy, nonatomic) id /* block */ traitChangeHandler;

- (id)traitCollection;
- (void).cxx_destruct;
- (id)initWithParentTraitEnvironment:(id)a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; id x2; BOOL x3; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; } x4; } *)a0;

@end
