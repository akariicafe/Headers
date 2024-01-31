@class UIColor, NSString, PXStoryChromeButtonSpec, NSSymbolContentTransition, NSArray, UIMenu;
@protocol NSObject, PXDisplayAsset, PXStoryChromeButtonMenuDelegate;

@interface PXStoryChromeButtonConfiguration : NSObject <PXGViewUserData>

@property (retain, nonatomic) PXStoryChromeButtonSpec *spec;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) UIMenu *menu;
@property (weak, nonatomic) id<PXStoryChromeButtonMenuDelegate> menuDelegate;
@property (weak, nonatomic) id<NSObject> customContextMenuInteractionDelegate;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long systemImageStyle;
@property (nonatomic) long long preferredSystemImageWeight;
@property (nonatomic) double preferredSystemImagePointSize;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) NSSymbolContentTransition *symbolTransition;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) BOOL hasPrimaryImageContent;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL backgroundExtendsUnderLabel;
@property (copy, nonatomic) NSString *badgeSystemImageName;
@property (copy, nonatomic) NSArray *badgeSystemImageColors;
@property (readonly, nonatomic) BOOL hasBadgeImageContent;
@property (nonatomic) unsigned long long badgeEdges;
@property (nonatomic) struct CGSize { double width; double height; } badgePadding;
@property (nonatomic) double badgeBorderWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeOutsets;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *focusedTintColor;
@property (retain, nonatomic) UIColor *solidBackgroundColor;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL applyTintColorAsHierarchicalColor;
@property (nonatomic) BOOL backgroundColorAdaptsToHoveredState;
@property (nonatomic) long long pointerShape;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pointerShapeInsets;
@property (copy, nonatomic) NSString *axLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
