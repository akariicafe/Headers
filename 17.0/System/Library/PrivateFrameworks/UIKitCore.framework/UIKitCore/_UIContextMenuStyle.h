@class UIColor, NSArray, UIView, UITraitCollection;
@protocol _UITraitEnvironmentInternal;

@interface _UIContextMenuStyle : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } _preferredAnchor;
@property (nonatomic) struct CGPoint { double x; double y; } _preferredMenuAttachmentPoint;
@property (nonatomic) BOOL _allowsImmediateSelection;
@property (nonatomic) BOOL _shouldAvoidInputViews;
@property (nonatomic) BOOL _orderMenuBasedOnPriority;
@property (nonatomic) long long _backgroundInteractionStyle;
@property (weak, nonatomic) id<_UITraitEnvironmentInternal> _parentTraitEnvironmentForUserInterfaceStyle;
@property (nonatomic) double _preferredMenuWidth;
@property (readonly, nonatomic) BOOL _layoutAllowsPreview;
@property (readonly, nonatomic) BOOL _layoutAllowsMenu;
@property (nonatomic) BOOL prefersStackedHierarchy;
@property (nonatomic) unsigned long long preferredAttachmentEdge;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long preferredLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredEdgeInsets;
@property (nonatomic) BOOL hasInteractivePreview;
@property (nonatomic) BOOL preventPreviewRasterization;
@property (nonatomic) BOOL reversesActionOrderWhenAttachedToTop;
@property (nonatomic) BOOL previewOverlapsMenu;
@property (nonatomic) BOOL ignoresContainerSizeChange;
@property (nonatomic) BOOL prefersCenteredPreviewWhenActionsAreAbsent;
@property (nonatomic) BOOL keepsInputViewsVisible;
@property (nonatomic) BOOL ignoresDefaultSizingRules;
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredBackgroundInsets;

+ (id)defaultStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAllowsBackgroundInteractionAcrossProccesses:(BOOL)a0;

@end
