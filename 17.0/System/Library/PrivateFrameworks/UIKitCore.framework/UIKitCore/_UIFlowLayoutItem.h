@class _UIFlowLayoutRow, _UIFlowLayoutSection;

@interface _UIFlowLayoutItem : NSObject {
    struct { unsigned char sizeEstimated : 1; unsigned char positionEstimated : 1; unsigned char sizeHasBeenSet : 1; } _itemFlags;
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _itemFrame;
}

- (id)copy;
- (void).cxx_destruct;

@end
