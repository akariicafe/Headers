@class NSString;

@interface CPSImageRowCell : CPUIImageRowCell <CPSCellSizable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForListItem:(id)a0;

- (void)configureWithImageRowItem:(id)a0 selectGridItemBlock:(id /* block */)a1 selectTitleBlock:(id /* block */)a2 showActivityIndicator:(BOOL)a3;

@end
