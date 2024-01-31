@class PXPeopleScalableAvatarView, PHPerson;

@interface PXPeopleInternalAnnotationPersonSummaryViewController : UIViewController

@property (readonly, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (retain, nonatomic) PHPerson *person;
@property (readonly, nonatomic) id /* block */ dismissCompletion;
@property (readonly, nonatomic) id /* block */ cancelCompletion;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancelTapped:(id)a0;
- (id)initWithPerson:(id)a0 withDismissCompletion:(id /* block */)a1 withCancelCompletion:(id /* block */)a2;
- (void)nextTapped:(id)a0;

@end
