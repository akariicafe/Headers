@class NSArray, HFItem, HUGridLayoutOptions, UILabel, NSString;
@protocol HUResizableCellDelegate;

@interface HUTriggerHeaderCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) double contentBottomMargin;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
