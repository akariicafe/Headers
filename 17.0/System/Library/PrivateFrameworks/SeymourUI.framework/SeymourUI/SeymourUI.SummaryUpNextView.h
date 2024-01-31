@interface SeymourUI.SummaryUpNextView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ thumbnailView;
    void /* unknown type, empty encoding */ gymKitIconView;
    void /* unknown type, empty encoding */ workoutTitleLabel;
    void /* unknown type, empty encoding */ workoutSubtitleLabel;
    void /* unknown type, empty encoding */ summaryQueueCountView;
    void /* unknown type, empty encoding */ startButton;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ onStartButtonTapped;
    void /* unknown type, empty encoding */ onDoneButtonTapped;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)a0;
- (void)startButtonTapped;

@end
