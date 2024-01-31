@class NSDictionary, NSMutableDictionary, AssistantUIViewController;

@interface AssistantSubUIViewController : AUUITableViewController

@property (nonatomic) AssistantUIViewController *parentController;
@property (retain, nonatomic) NSDictionary *inParamDict;
@property (readonly, nonatomic) NSMutableDictionary *outResultsDict;

+ (id)containerViewWithWidth:(double)a0;
+ (id)labelViewInContainer:(id *)a0 width:(double)a1;
+ (id)labelViewInContainer:(id *)a0 width:(double)a1 constrain:(BOOL)a2;
+ (id)labelViewInContainer:(id *)a0 width:(double)a1 withSpinner:(id *)a2 above:(BOOL)a3;
+ (id)tableViewWithWidth:(double)a0 height:(double)a1;
+ (id)topoViewWithWidth:(double)a0;

- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)getProductLocalizedStringWithFormat:(id)a0;
- (void)setLeftNavigationButton:(id)a0 enable:(BOOL)a1 hide:(BOOL)a2;
- (void)setRightNavigationButton:(id)a0 enable:(BOOL)a1 hide:(BOOL)a2;

@end
