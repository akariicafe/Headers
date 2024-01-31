@class EKEvent, UIViewController;
@protocol EKEditItemViewControllerDelegate, EKEventViewDelegate, EKUIProposedTimeEventViewControllerImpl;

@interface EKUIProposedTimeEventViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UIViewController<EKUIProposedTimeEventViewControllerImpl> *_impl;
}

@property (weak, nonatomic) id<EKEventViewDelegate> delegate;
@property (retain, nonatomic) EKEvent *event;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithProposedTimeAttendee:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
