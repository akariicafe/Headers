@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer

@property (weak, nonatomic, setter=_setDelegate:) id<UIMutableTransformerDelegate> _delegate;

- (void)_updateTransform;
- (void)removeAll;
- (void)removeTransform:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addTransform:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (void)replaceTransform:(id)a0 withTransform:(id)a1 reason:(id)a2;
- (void)_ensureTransformsStructuresExists;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
