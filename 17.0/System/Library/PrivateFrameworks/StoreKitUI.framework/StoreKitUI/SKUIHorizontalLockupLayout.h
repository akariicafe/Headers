@class NSMutableArray;

@interface SKUIHorizontalLockupLayout : NSObject {
    double _imageMarginRight;
    double _metadataColumnMinHeight;
    double _tallestNonMetadataColumnHeight;
}

@property (readonly, nonatomic) NSMutableArray *columns;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } metadataColumnEdgeInsets;

+ (id)fontForButtonViewElement:(id)a0 context:(id)a1;
+ (id)fontForLabelViewElement:(id)a0 context:(id)a1;
+ (id)fontForOrdinalViewElement:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (double)_heightForMetadataColumn:(id)a0 width:(double)a1 context:(id)a2;
- (struct CGSize { double x0; double x1; })_sizeForRightAlignedColumn:(id)a0 width:(double)a1 context:(id)a2;
- (struct CGSize { double x0; double x1; })_sizeForViewElement:(id)a0 width:(long long)a1 context:(id)a2;
- (double)bottomPaddingForViewElement:(id)a0;
- (double)columnSpacingForColumnIdentifier:(long long)a0;
- (id)initWithLockup:(id)a0 context:(id)a1;
- (void)sizeColumnsToFitWidth:(double)a0 context:(id)a1;
- (double)topPaddingForViewElement:(id)a0;

@end
