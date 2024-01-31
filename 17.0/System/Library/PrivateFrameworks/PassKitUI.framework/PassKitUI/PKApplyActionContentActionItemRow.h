@class NSString, PKApplyActionContentActionItem;
@protocol NSCopying;

@interface PKApplyActionContentActionItemRow : NSObject <PKApplyCollectionViewRow> {
    PKApplyActionContentActionItem *_actionItem;
    id /* block */ _selectionHandler;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureCell:(id)a0;
- (void)handleCellSelection;
- (id)initWithApplyActionContentActionItem:(id)a0 selectionHandler:(id /* block */)a1;
- (BOOL)shouldHighlightItem;

@end
