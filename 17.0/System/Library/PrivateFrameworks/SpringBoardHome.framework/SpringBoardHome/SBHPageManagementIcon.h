@class SBIconListModel;

@interface SBHPageManagementIcon : SBLeafIcon

@property (readonly, nonatomic) SBIconListModel *listModel;

- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)canReceiveGrabbedIcon;
- (void).cxx_destruct;
- (BOOL)canBeAddedToSubfolder;
- (BOOL)canBeReceivedByIcon;
- (id)initWithListModel:(id)a0;

@end
