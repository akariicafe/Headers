@class UIButton;

@interface ICQBackupDeleteButton : UIView <PSHeaderFooterView> {
    UIButton *_deleteButton;
}

+ (double)usageDeleteButtonHeight;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0;

@end
