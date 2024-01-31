@interface TryItViewController : UIViewController {
    void /* unknown type, empty encoding */ hostingController;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLessonURL:(id)a0 tipID:(id)a1 collectionID:(id)a2 correlationID:(id)a3;

@end
