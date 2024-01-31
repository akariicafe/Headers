@interface PUPhotoEditLayoutSupport : NSObject

+ (int)productType;
+ (void)getTopLeadingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 topTrailingButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inRTL:(BOOL)a3;
+ (id)constraintsForNotchAreaButtonsLeading:(id)a0 trailing:(id)a1 inWindow:(id)a2;
+ (void)currentDeviceButtonSize:(struct CGSize { double x0; double x1; } *)a0 offset:(struct UIOffset { double x0; double x1; } *)a1 zoomedSize:(struct CGSize { double x0; double x1; } *)a2 zoomedOffset:(struct UIOffset { double x0; double x1; } *)a3 normalScreenWidth:(double *)a4;
+ (BOOL)doneCancelButtonsInNotchAreaForLayoutOrientation:(long long)a0 viewWidth:(double)a1;
+ (BOOL)isNotchedPhone;
+ (BOOL)isPhoneClassDevice;
+ (id)layoutConstraintsForHidingSecondaryView:(id)a0 layoutOrientation:(long long)a1;
+ (id)layoutConstraintsForHidingView:(id)a0 layoutOrientation:(long long)a1;
+ (double)topToolbarVerticalOffsetForLayoutOrientation:(long long)a0 view:(id)a1;
+ (void)transitionFromBarView:(id)a0 orientation:(long long)a1 toBarView:(id)a2 orientation:(long long)a3 coordinator:(id)a4 completionHandler:(id /* block */)a5;

@end
