@class UIViewController, CNContactNavigationController, CNContactViewController;
@protocol CNContactViewControllerPrivateDelegate;

@interface MUPlaceViewControllerConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (weak, nonatomic) CNContactNavigationController<CNContactViewControllerPrivateDelegate> *contactsNavigationController;
@property (retain, nonatomic) CNContactViewController *contactsViewController;
@property (retain, nonatomic) UIViewController *headerViewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
