@class SBIconListModel;

@interface SBRotatedIconListModel : SBIconListModel

@property (weak, nonatomic) SBIconListModel *unrotatedIconListModel;

+ (BOOL)supportsRotatedLayout;

- (void)clearParentNodeForIconIfNecessary:(id)a0;
- (void)_notifyListObserversDidAddIcons:(id)a0 didRemoveIcons:(id)a1 movedIcons:(id)a2 didReplaceIcon:(id)a3 withIcon:(id)a4;
- (void).cxx_destruct;
- (void)updateParentNodeForIconIfNecessary:(id)a0;

@end
