@class UICollectionViewFlowLayout, NSMutableArray;

@interface _UIFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _isValid;
    struct CGSize { double width; double height; } _computedEstimatedSum;
    long long _computedEstimatedCount;
    BOOL _usesFloatingHeaderFooter;
    BOOL _horizontal;
    BOOL _leftToRight;
    BOOL _estimatesSizes;
    NSMutableArray *_sections;
    double _dimension;
    UICollectionViewFlowLayout *_layout;
    struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } _rowAlignmentOptions;
    struct CGSize { double width; double height; } _contentSize;
}

- (id)init;
- (id)copy;
- (void).cxx_destruct;

@end
