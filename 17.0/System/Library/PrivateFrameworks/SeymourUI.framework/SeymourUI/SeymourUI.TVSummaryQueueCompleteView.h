@class NSArray;

@interface SeymourUI.TVSummaryQueueCompleteView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ totalTimeTitleLabel;
    void /* unknown type, empty encoding */ totalTimeDetailLabel;
    void /* unknown type, empty encoding */ totalEnergyTitleLabel;
    void /* unknown type, empty encoding */ totalEnergyDetailLabel;
    void /* unknown type, empty encoding */ totalDistanceTitleLabel;
    void /* unknown type, empty encoding */ totalDistanceDetailLabel;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ saveButton;
    void /* unknown type, empty encoding */ onDoneButtonTapped;
    void /* unknown type, empty encoding */ onSaveButtonTapped;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)a0;
- (void)saveButtonTapped;

@end
