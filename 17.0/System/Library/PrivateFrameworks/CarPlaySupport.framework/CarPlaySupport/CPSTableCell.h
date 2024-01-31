@class NSString;

@interface CPSTableCell : CPUITableCell <CPSCellSizable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForListItem:(id)a0;

- (void)configureWithListItem:(id)a0 spinning:(BOOL)a1 environment:(id)a2 playbackState:(long long)a3;

@end
