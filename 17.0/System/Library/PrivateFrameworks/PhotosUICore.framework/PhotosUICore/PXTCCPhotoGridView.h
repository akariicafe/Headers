@class NSMutableArray;

@interface PXTCCPhotoGridView : UIView

@property (readonly, nonatomic) NSMutableArray *imageViews;
@property (nonatomic) long long totalColumns;
@property (nonatomic) long long totalRows;

+ (id)photoGridViewForSettings;
+ (id)photoGridViewForAlertPromptWithWidth:(double)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutItemsAndCalculateTotalSizeForTargetWidth:(double)a0;
- (void)_setUpViewsWithImages:(id)a0 maximumItemCount:(long long)a1;
- (id)initWithColumns:(long long)a0 proposedRows:(long long)a1 width:(double)a2;

@end
