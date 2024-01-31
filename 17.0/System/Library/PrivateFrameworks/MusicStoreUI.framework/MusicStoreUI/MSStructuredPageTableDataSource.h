@interface MSStructuredPageTableDataSource : SUStructuredPageGroupedTableDataSource

- (BOOL)canDoubleTapIndexPath:(id)a0;
- (Class)cellClassForItem:(id)a0 reuseIdentifier:(id *)a1;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)canShowPreviewForItem:(id)a0;

@end
