@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView : UILabel <_UIStatusBarDisplayable>

@property (nonatomic) BOOL showsAlternateText;
@property (copy, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSTimer *alternateTextTimer;
@property (nonatomic) long long fontStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (copy, nonatomic) NSString *alternateText;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
