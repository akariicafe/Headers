@class NSArray, NSString, _UISheetPresentationControllerAppearance;

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding>

@property (class, readonly, nonatomic) _UISheetPresentationControllerConfiguration *_fullScreenConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setPeeksWhenFloating:) BOOL _peeksWhenFloating;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen;
@property (nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) BOOL _wantsEdgeAttachedInCompactHeight;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) BOOL _widthFollowsPreferredContentSizeWhenEdgeAttached;
@property (nonatomic, setter=_prefersGrabberVisible:) BOOL _prefersGrabberVisible;
@property (nonatomic, setter=_setGrabberTopSpacing:) double _grabberTopSpacing;
@property (nonatomic, setter=_setAdditionalMinimumTopInset:) double _additionalMinimumTopInset;
@property (nonatomic, setter=_setInsetsPresentedViewForGrabber:) BOOL _insetsPresentedViewForGrabber;
@property (nonatomic, setter=_setMode:) long long _mode;
@property (nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) double _cornerRadiusForPresentationAndDismissal;
@property (nonatomic, setter=_setPreferredCornerRadius:) double _preferredCornerRadius;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (copy, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier;
@property (retain, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance;
@property (retain, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance;
@property (retain, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance;
@property (nonatomic, setter=_setDetentDirectionWhenFloating:) long long _detentDirectionWhenFloating;
@property (nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) BOOL _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (nonatomic, setter=_setHostParentDepthLevel:) double _hostParentDepthLevel;
@property (nonatomic, setter=_setHostParentStackAlignmentFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hostParentStackAlignmentFrame;
@property (nonatomic, setter=_setHostParentFullHeightUntransformedFrameForDepthLevel:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hostParentFullHeightUntransformedFrameForDepthLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
