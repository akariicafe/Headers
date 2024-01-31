@class UIColor, UIFont, NSString;

@interface MTUITonePickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

@property (readonly, nonatomic) BOOL tonePickerUsesOpaqueBackground;
@property (readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property (readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property (readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property (readonly, nonatomic) BOOL wantsCustomTonePickerHeaderView;
@property (readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } tonePickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tonePickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property (readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) BOOL tonePickerHeaderTextShouldBeUppercase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL vibrationPickerUsesOpaqueBackground;
@property (readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property (readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property (readonly, nonatomic) BOOL wantsCustomVibrationPickerHeaderView;
@property (readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } vibrationPickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } vibrationPickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property (readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) BOOL vibrationPickerHeaderTextShouldBeUppercase;

- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)a0;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)a0;

@end
