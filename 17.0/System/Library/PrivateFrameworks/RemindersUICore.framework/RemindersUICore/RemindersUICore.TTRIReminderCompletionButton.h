@class NSArray;

@interface RemindersUICore.TTRIReminderCompletionButton : RemindersUICore.TTRIExpandedHitTestButton {
    void /* unknown type, empty encoding */ preferredSymbolConfiguration;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ prefersFadedAppearance;
    void /* unknown type, empty encoding */ needsUpdateIcon;
}

@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
