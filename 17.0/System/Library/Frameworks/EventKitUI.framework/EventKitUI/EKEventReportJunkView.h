@class EKEventViewController, EKEventDetailsHighlightControl;

@interface EKEventReportJunkView : UIView {
    EKEventDetailsHighlightControl *_control;
    EKEventViewController *_controller;
}

@property BOOL isLargeDayView;

- (id)initWithViewController:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (void)tapped:(id)a0;
- (void)updateActionText;

@end
