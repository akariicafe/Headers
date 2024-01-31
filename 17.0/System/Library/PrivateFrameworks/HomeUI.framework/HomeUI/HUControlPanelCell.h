@class NSSet, HFItem, NSString, NSLayoutConstraint;
@protocol HUResizableCellDelegate;

@interface HUControlPanelCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint;
@property (readonly, nonatomic) NSSet *allControlViews;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
