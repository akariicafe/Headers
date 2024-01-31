@class UIAnimatableProperty;

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase

@property (readonly, nonatomic) UIAnimatableProperty *animatableProperty;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)transformer;
- (void)setTransformer:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
