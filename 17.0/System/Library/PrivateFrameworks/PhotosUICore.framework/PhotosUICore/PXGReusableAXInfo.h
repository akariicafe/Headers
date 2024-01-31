@class NSObject, NSArray, NSString, PXReusableObjectPool, UIFocusEffect, UIView, PXGBasicAXGroup;
@protocol UIFocusEnvironment, UIFocusItemContainer, PXDisplayAsset, PXAnonymousView;

@interface PXGReusableAXInfo : NSObject <UIFocusItem, PXGAXInfo, PXReusableObject>

@property (class, readonly, nonatomic) PXReusableObjectPool *sharedPool;

@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long axContentKind;
@property (weak, nonatomic) PXGBasicAXGroup *axContainingGroup;
@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) struct { struct { double x; double y; double z; } center; void /* unknown type, empty encoding */ size; } spriteGeometry;
@property (nonatomic) struct { float alpha; void /* unknown type, empty encoding */ contentsRect; void /* unknown type, empty encoding */ clippingRect; struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius; float zSortOffset; float rotation; float scale; float contentsRotation; unsigned short resizableCapInsetsIndex; unsigned char contentsGravity; void /* unknown type, empty encoding */ anchorPoint; float translationZ; struct { void /* unknown type, empty encoding */ columns[4]; } focusTransform; } spriteStyle;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } spriteStyleCornerRadius;
@property (nonatomic) long long focusRingType;
@property (nonatomic) long long alternateUIVisibility;
@property (readonly, nonatomic) id content;
@property (nonatomic) BOOL axAccessibleWhenTransparent;
@property (nonatomic) BOOL allowDecorations;
@property (retain, nonatomic) NSArray *axDecorations;
@property (readonly, nonatomic) NSString *axText;
@property (readonly, nonatomic) NSString *axTitle;
@property (readonly, nonatomic) NSString *axSubtitle;
@property (readonly, nonatomic) NSString *axImageName;
@property (readonly, nonatomic) id<PXDisplayAsset> axAsset;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } axFrame;
@property (readonly, nonatomic) BOOL axIsSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleSubtitleInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (BOOL)_assetHasContentSourceInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_textInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (id)_imageNameInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;
+ (Class)_viewClassInLayout:(id)a0 atSpriteIndex:(unsigned int)a1;

- (void)setNeedsFocusUpdate;
- (id)init;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)updateFocusIfNeeded;
- (void)didHintFocusMovement:(id)a0;
- (BOOL)_isEligibleForFocusInteraction;
- (void)setContent:(id)a0 ofContentKind:(long long)a1;
- (BOOL)_fillForKind:(long long)a0 withLayout:(id)a1 spriteIndex:(unsigned int)a2;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)fillContentForContentKind:(long long)a0 inLayout:(id)a1 atIndex:(unsigned int)a2;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)applyToInfo:(id)a0;
- (id)_viewAtSpriteIndex:(unsigned int)a0;

@end
