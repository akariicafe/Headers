@class UIView;
@protocol CKFullscreenEffectView;

@interface CKFullscreenEffectDecorationView : UICollectionReusableView

@property (weak, nonatomic) UIView<CKFullscreenEffectView> *effectView;

+ (id)reuseIdentifier;
+ (id)decorationViewKind;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setupForEffectView:(id)a0;
- (void)tearDownEffectView;

@end
