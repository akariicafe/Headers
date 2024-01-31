@class CKMediaObjectBackedAsset, UIView;
@protocol CKGradientReferenceView;

@interface CKMediaObjectTapbackUserData : NSObject

@property (retain, nonatomic) CKMediaObjectBackedAsset *asset;
@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL invertTailDirection;
@property (nonatomic, getter=isDisplayedInGridView) BOOL displayedInGridView;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
