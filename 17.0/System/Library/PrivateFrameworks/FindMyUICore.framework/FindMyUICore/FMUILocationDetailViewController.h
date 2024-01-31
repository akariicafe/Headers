@class UINavigationItem;

@interface FMUILocationDetailViewController : UIViewController {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ viewOptions;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)stopObserving;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)setRemoteParticipantHandles:(id)a0 localParticipantHandle:(id)a1;
- (void)setViewOptions:(id)a0;
- (void)startObservingContacts:(id)a0;
- (void)pauseSubscriptions;
- (void)resumeSubscriptions;
- (void)startObservingContacts:(id)a0 fromCallerHandle:(id)a1;
- (void)startObservingHandles:(id)a0 callerHandle:(id)a1;

@end
