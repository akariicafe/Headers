@class NSString;

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)moveItem:(id)a0 afterItem:(id)a1;
- (BOOL)canMoveItem:(id)a0;
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)a0 toProprosedIndexPath:(id)a1;
- (id)limitedIndexPathForMovingIndexPath:(id)a0 toProprosedIndexPath:(id)a1;
- (id)moveItem:(id)a0 beforeItem:(id)a1;

@end
