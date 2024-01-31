@interface TPIncomingCallMetricsProvider : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontalNameLabelBoundingRectForName:(id)a0 window:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalNameLabelBoundingRectForName:(id)a0 window:(id)a1;
+ (id)mobileLabelFont;
+ (void)addCallerNameView:(id)a0 toContainerView:(id)a1;
+ (void)addCallerNameView:(id)a0 toViewController:(id)a1;
+ (id)appropriateCallerNameViewForContact:(id)a0 callStatus:(id)a1 callIsActive:(BOOL)a2;
+ (double)bottomBarBottomMarginForHomeButtonOffset:(double)a0;
+ (void)constraintIncomingCallTextViewAdapterWrapper:(id)a0 toView:(id)a1;
+ (void)constraintIncomingCallTextViewForHorizontalLayout:(id)a0 toView:(id)a1;
+ (void)constraintIncomingCallTextViewForVerticalLayout:(id)a0 toView:(id)a1;
+ (double)homeButtonOffsetForSafeAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontalNameLabelBoundingRectForName:(id)a0 caption:(id)a1 window:(id)a2 preferredTitleFont:(id)a3;
+ (id)nameLabelFont;
+ (id)posterDisplayNameForContact:(id)a0;
+ (double)sideMarginForDoubleButton;
+ (double)sixPercentOfDeviceHeight;
+ (double)twentyTwoPointFivePercentOfDeviceHeight;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })verticalNameHorizontalStatusLabelPositionTransform;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalNameLabelBoundingRectForName:(id)a0 caption:(id)a1 window:(id)a2 preferredTitleFont:(id)a3;
+ (double)verticalTextTopMargin;

@end
