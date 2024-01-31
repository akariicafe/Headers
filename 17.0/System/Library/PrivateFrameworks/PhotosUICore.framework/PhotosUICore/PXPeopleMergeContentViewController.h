@class PHPerson;

@interface PXPeopleMergeContentViewController : UIViewController

@property (retain, nonatomic) PHPerson *targetPerson;
@property (retain, nonatomic) PHPerson *draggedPerson;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTargetPerson:(id)a0 draggedPerson:(id)a1;

@end
