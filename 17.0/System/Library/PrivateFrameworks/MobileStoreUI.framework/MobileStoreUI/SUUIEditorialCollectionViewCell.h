@class NSString, SUUIEditorialCellLayout;

@interface SUUIEditorialCollectionViewCell : SUUICollectionViewCell <SUUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property (readonly, nonatomic) SUUIEditorialCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCellLayoutNeedsLayout;

@end
