@class NSArray, PKPaletteToolPickerEdgeView;

@interface PKPaletteToolPickerBackgroundContentView : UIView {
    PKPaletteToolPickerEdgeView *_topOrLeadingEdgeView;
    PKPaletteToolPickerEdgeView *_bottomOrTrailingEdgeView;
    NSArray *_horizontalLayoutConstraints;
    NSArray *_verticalLayoutConstraints;
    BOOL _isVerticalRight;
    BOOL _topOrLeadingEdgeViewVisible;
    BOOL _bottomOrTrailingEdgeViewVisible;
    long long _layoutAxis;
}

- (id)init;
- (void).cxx_destruct;

@end
