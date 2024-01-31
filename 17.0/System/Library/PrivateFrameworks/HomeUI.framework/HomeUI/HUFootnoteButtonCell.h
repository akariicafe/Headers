@class UIButton, NSString, HFItem;
@protocol HUResizableCellDelegate;

@interface HUFootnoteButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateTextColor;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
