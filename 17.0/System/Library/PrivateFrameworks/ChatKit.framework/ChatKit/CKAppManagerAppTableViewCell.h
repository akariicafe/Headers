@class NSString, UISwitch;
@protocol CKAppManagerAppTableViewCellDelegate;

@interface CKAppManagerAppTableViewCell : UITableViewCell

@property (copy, nonatomic) NSString *currentPluginIdentifierForIconLoading;
@property (weak, nonatomic) id<CKAppManagerAppTableViewCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *appToggle;

+ (id)reuseIdentifier;

- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateConfigurationWithImage:(id)a0 text:(id)a1;
- (void)appToggleTapped:(id)a0;
- (void)configureCellFromInitializer;
- (void)setToggleVisible:(BOOL)a0 editable:(BOOL)a1 isOn:(BOOL)a2 isSelectable:(BOOL)a3;
- (void)updateCellWithPluginInfo:(id)a0;

@end
