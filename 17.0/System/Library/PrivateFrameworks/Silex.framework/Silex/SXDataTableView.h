@class SXDataTableBlueprint, NSMutableDictionary;
@protocol SXDataTableDataSource, SXDataTableViewDataSource;

@interface SXDataTableView : SXDataTableDrawView {
    id<SXDataTableViewDataSource> _viewDataSource;
    id<SXDataTableDataSource> _dataSource;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_rowViews;
    NSMutableDictionary *_columnViews;
}

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })originOffset;

@end
