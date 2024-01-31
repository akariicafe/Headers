@interface MenstrualCyclesAppPlugin.CycleHistorySingleCycleCell : UITableViewCell {
    void /* unknown type, empty encoding */ singleCycleView;
    void /* unknown type, empty encoding */ press;
    void /* unknown type, empty encoding */ tap;
}

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (void)cycleViewPanned:(id)a0;
- (void)cycleViewPressed:(id)a0;
- (void)cycleViewTapped:(id)a0;
- (void)respondToHorizontalSizeChanges;

@end
