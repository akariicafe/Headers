@interface PXPhotosGridMessagesLayoutSpec : PXFeatureSpec {
    struct CGSize { double width; double height; } _referenceSize;
}

@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } itemInternalMargin;
@property (readonly, nonatomic) struct CGSize { double width; double height; } itemInternalSquareMargin;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (long long)numberOfColumnsForNumberOfItems:(long long)a0;

@end
