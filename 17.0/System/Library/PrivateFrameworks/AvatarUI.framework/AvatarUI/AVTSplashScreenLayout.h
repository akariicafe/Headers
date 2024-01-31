@class UIButton, UIFont, NSString;
@protocol AVTSplashScreenLayoutDelegate;

@interface AVTSplashScreenLayout : NSObject

@property (class, readonly, nonatomic) UIFont *titleFont;
@property (class, readonly, nonatomic) UIFont *subTitleFont;
@property (class, readonly, nonatomic) UIFont *buttonFont;
@property (class, readonly, nonatomic) UIButton *blueButton;
@property (class, readonly, nonatomic) UIButton *cancelButton;

@property (nonatomic) BOOL wantsSecondaryVideo;
@property (nonatomic) BOOL constrainToContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subTitleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryVideoFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondaryVideoFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } buttonFrame;
@property (copy, nonatomic) NSString *currentContentSizeCategory;
@property (nonatomic) BOOL needsLayout;
@property (weak, nonatomic) id<AVTSplashScreenLayoutDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) unsigned long long labelEdgePaddingStyle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } unconstrainedContentSize;

+ (BOOL)isSmallScreen;
+ (unsigned long long)appropriateLabelEdgePaddingStyleForViewSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameForString:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(unsigned long long)a0 contentSizeCategory:(id)a1 numberOfLines:(long long)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryVideoFrameForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wantsSecondaryVideo:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })primaryVideoSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryVideoFrameForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGSize { double x0; double x1; })secondaryVideoSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subTitleFrameForString:(id)a0 titleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 buttonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 wantsSecondaryVideo:(BOOL)a3 containerSize:(struct CGSize { double x0; double x1; })a4 labelEdgePadding:(double)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrameForString:(id)a0 yOrigin:(double)a1 containerSize:(struct CGSize { double x0; double x1; })a2 labelEdgePadding:(double)a3;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)calculateLayoutWithTitleString:(id)a0 subTitleString:(id)a1 buttonTitle:(id)a2;
- (void)didChangeContentSizeCategory:(id)a0;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 wantsSecondaryVideo:(BOOL)a2 labelEdgePaddingStyle:(unsigned long long)a3;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 wantsSecondaryVideo:(BOOL)a2 labelEdgePaddingStyle:(unsigned long long)a3 currentContentSizeCategory:(id)a4;

@end
