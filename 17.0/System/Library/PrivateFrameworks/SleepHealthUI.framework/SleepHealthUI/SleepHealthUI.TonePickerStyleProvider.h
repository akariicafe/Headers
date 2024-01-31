@class UIColor, UIFont;

@interface SleepHealthUI.TonePickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

@property (nonatomic, readonly) BOOL tonePickerUsesOpaqueBackground;
@property (nonatomic, readonly) long long tonePickerTableViewSeparatorStyle;
@property (nonatomic, readonly) UIFont *tonePickerCellTextFont;
@property (nonatomic, readonly) UIColor *tonePickerCellTextColor;
@property (nonatomic, readonly) UIColor *tonePickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *tonePickerCellBackgroundColor;
@property (nonatomic, readonly) BOOL wantsCustomTonePickerHeaderView;
@property (nonatomic, readonly) UIFont *tonePickerHeaderTextFont;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextColor;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset { double x0; double x1; } tonePickerHeaderTextShadowOffset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tonePickerHeaderTextPaddingInsets;
@property (nonatomic, readonly) BOOL vibrationPickerUsesOpaqueBackground;
@property (nonatomic, readonly) long long vibrationPickerTableViewSeparatorStyle;
@property (nonatomic, readonly) UIFont *vibrationPickerCellTextFont;
@property (nonatomic, readonly) UIColor *vibrationPickerCellTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellBackgroundColor;
@property (nonatomic, readonly) BOOL wantsCustomVibrationPickerHeaderView;
@property (nonatomic, readonly) UIFont *vibrationPickerHeaderTextFont;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset { double x0; double x1; } vibrationPickerHeaderTextShadowOffset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } vibrationPickerHeaderTextPaddingInsets;

- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)a0;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)a0;
- (id)init;

@end
