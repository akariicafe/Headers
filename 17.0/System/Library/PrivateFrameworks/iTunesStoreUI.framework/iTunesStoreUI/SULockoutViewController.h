@class UIImage, NSString, NSBundle;

@interface SULockoutViewController : SUViewController

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *messageBody;
@property (retain, nonatomic) NSString *messageTitle;
@property (retain, nonatomic) NSBundle *localizationBundle;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)copyArchivableContext;

@end
