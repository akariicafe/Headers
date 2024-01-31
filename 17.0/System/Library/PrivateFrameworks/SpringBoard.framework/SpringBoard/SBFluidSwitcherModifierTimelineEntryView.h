@class UILabel, UITapGestureRecognizer, SBSwitcherModifierTimelineEntry;
@protocol SBFluidSwitcherModifierTimelineEntryViewDelegate;

@interface SBFluidSwitcherModifierTimelineEntryView : UIView {
    UILabel *_nameLabel;
    UILabel *_postStackLabel;
    UILabel *_actionsLabel;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (weak, nonatomic) id<SBFluidSwitcherModifierTimelineEntryViewDelegate> delegate;

- (void)_tap:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_appendRecursiveDescriptionToString:(id)a0 level:(unsigned long long)a1 snapshot:(id)a2;
- (id)_attributedStringsForStack:(id)a0;
- (id)_randomColorWithSeed:(unsigned long long)a0;
- (double)_randomFloatFromSeed:(unsigned long long)a0 min:(double)a1 max:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 entry:(id)a1;

@end
