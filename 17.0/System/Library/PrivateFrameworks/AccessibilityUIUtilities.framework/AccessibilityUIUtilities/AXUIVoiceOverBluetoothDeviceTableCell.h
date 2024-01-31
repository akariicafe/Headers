@class UIActivityIndicatorView;

@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    int _state;
}

+ (id)checkedImage;
+ (id)selectedCheckedImage;
+ (id)spacerImage;
+ (id)textForBTPairedState:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDeviceState:(int)a0;
- (void)setChecked:(BOOL)a0;
- (void)_updateCheckMarkIcon;
- (void)setDeviceStatePaired:(BOOL)a0 andConnected:(BOOL)a1;

@end
