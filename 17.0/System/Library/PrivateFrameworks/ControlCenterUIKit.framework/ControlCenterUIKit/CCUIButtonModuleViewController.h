@class UIColor, NSString, CCUIButtonModuleView, UIImage, UIViewPropertyAnimator, CCUICAPackageDescription;

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController> {
    CCUIButtonModuleView *_buttonModuleView;
}

@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIImage *selectedGlyphImage;
@property (retain, nonatomic) UIColor *selectedGlyphColor;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (nonatomic) double glyphScale;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) CCUIButtonModuleView *buttonView;
@property (readonly, nonatomic) BOOL hasGlyph;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)buttonTouchDown:(id)a0 forEvent:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)_buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_buttonTouchDown:(id)a0 forEvent:(id)a1;

@end
