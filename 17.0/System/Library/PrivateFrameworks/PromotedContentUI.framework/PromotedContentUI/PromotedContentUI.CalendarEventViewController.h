@interface PromotedContentUI.CalendarEventViewController : UIViewController <EKEventEditViewDelegate> {
    void /* unknown type, empty encoding */ actionResult;
    void /* unknown type, empty encoding */ calendarEvent;
    void /* unknown type, empty encoding */ eventStore;
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ notificationOpenObserver;
    void /* unknown type, empty encoding */ backgroundedTime;
    void /* unknown type, empty encoding */ actionDelegate;
}

- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
