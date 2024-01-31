@class UIColor, NSArray, NSString, _UITextSelectionRangeView, NSMutableArray;

@interface _UITextSelectionHighlightView : UIView <UITextSelectionHighlightView> {
    BOOL _needsUpdate;
    _UITextSelectionRangeView *_rangeView;
    NSMutableArray *_underlineViews;
    NSMutableArray *_trackedUnderlineRects;
}

@property (retain, nonatomic) NSArray *underlineRects;
@property (retain, nonatomic, setter=_setSelectionBorderColor:) UIColor *_selectionBorderColor;
@property (nonatomic, setter=_setSelectionBorderWidth:) double _selectionBorderWidth;
@property (nonatomic, setter=_setSelectionCornerRadius:) double _selectionCornerRadius;
@property (nonatomic, setter=_setSelectionEdgeInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _selectionEdgeInsets;
@property (retain, nonatomic) NSArray *selectionRects;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_selectionBorderColor;
- (double)_selectionBorderWidth;
- (void)addUnderlines:(id)a0 animated:(BOOL)a1;
- (void)clearAllUnderlinesAnimated:(BOOL)a0;
- (id)pathForSingleUnderline:(id)a0;
- (void)removeUnderlines:(id)a0 animated:(BOOL)a1;
- (void)updateUnderlinesIfNeeded;

@end
