@interface _TVGridViewController : _TVMLCollectionViewController {
    BOOL _configureForListTemplate;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (BOOL)contentFlowsVertically;
- (id)makeCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldHeaderFloatByDefault;
- (void)updateViewLayoutAnimated:(BOOL)a0 relayout:(BOOL)a1;
- (void)updateWithViewElement:(id)a0 cellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })a1;

@end
