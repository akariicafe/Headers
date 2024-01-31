@class NSArray, PRXIconContentView, NSString;

@interface PRXIconContentViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXIconContentView *contentView;
@property (nonatomic) long long imageStyle;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *bodyText;

+ (Class)contentViewClass;

- (id)initWithContentView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateImageViews;
- (void)_updateBodyLabel;

@end
