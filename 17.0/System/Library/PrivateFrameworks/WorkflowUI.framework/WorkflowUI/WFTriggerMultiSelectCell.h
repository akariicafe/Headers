@class UIStackView, NSArray, UIColor, NSString, WFTriggerOptionSelectionViewContainer;
@protocol WFTriggerMultiSelectCellDelegate;

@interface WFTriggerMultiSelectCell : UITableViewCell <WFTriggerOptionSelectionViewContainerDelegate>

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSArray *optionContainers;
@property (readonly, nonatomic) WFTriggerOptionSelectionViewContainer *containerTop;
@property (readonly, nonatomic) WFTriggerOptionSelectionViewContainer *containerMiddle;
@property (readonly, nonatomic) WFTriggerOptionSelectionViewContainer *containerBottom;
@property (nonatomic, getter=isLeftViewSelected) BOOL leftViewSelected;
@property (nonatomic, getter=isRightViewSelected) BOOL rightViewSelected;
@property (weak, nonatomic) id<WFTriggerMultiSelectCellDelegate> delegate;
@property (readonly, nonatomic) NSArray *selectedCellViews;
@property (nonatomic) BOOL singleSelection;
@property (retain, nonatomic) UIColor *selectedViewTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiSelectCellOptionConfigurationWithImage:(id)a0 selectedImage:(id)a1 title:(id)a2 tintColor:(id)a3 selected:(BOOL)a4;
+ (id)multiSelectCellOptionConfigurationWithImage:(id)a0 title:(id)a1 tintColor:(id)a2 selected:(BOOL)a3;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithLeftGlyph:(id)a0 leftTitle:(id)a1 leftTintColor:(id)a2 rightGlyph:(id)a3 rightTitle:(id)a4 rightTintColor:(id)a5;
- (void)setMultiSelectCellOptionConfigurations:(id)a0;
- (void)view:(id)a0 didSelectOptionWithLeftViewCurrentlySelected:(BOOL)a1;
- (void)view:(id)a0 didSelectOptionWithRightViewCurrentlySelected:(BOOL)a1;

@end
