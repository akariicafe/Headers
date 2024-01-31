@class NSString;

@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider>

@property (nonatomic) double minimumIntrinsicHeight;
@property (nonatomic) BOOL canIntrinsicHeightExceedContentHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double naturalHeight;
@property (readonly, nonatomic) BOOL shouldExtendCaretHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicSizeForContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPerEdgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithSymmetricalPadding:(struct CGSize { double x0; double x1; })a0;

@end
