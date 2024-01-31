@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell

@property (copy, nonatomic) UIKeyboardInputMode *inputMode;
@property (readonly, nonatomic) BOOL hasDownloadableAssets;

+ (long long)cellStyle;

- (void)dealloc;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)subtitle;
- (id)title;
- (void)updateLabels;
- (void)addDownloadIcon;
- (void)downloadButtonPressed:(id)a0 withEvent:(id)a1;

@end
