@class NSObject;
@protocol STRootViewModelCoordinator;

@interface STFamilyRootViewController : STListViewController

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic) BOOL presentedAsModal;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModalPresentation:(BOOL)a0;

@end
