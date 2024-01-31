@class UICellAccessory, HUCheckmarkAccessoryView;

@interface HUCheckmarkIconCollectionListCell : HUIconCollectionListCell

@property (readonly, nonatomic) HUCheckmarkAccessoryView *checkmarkAccessoryView;
@property (readonly, nonatomic) UICellAccessory *checkmarkCellAccessory;
@property (nonatomic) BOOL hidesCheckmark;
@property (nonatomic) BOOL disablesCheckmark;

- (void).cxx_destruct;
- (id)_buildAccessories;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
