@class NSString, _UNNotificationContact;
@protocol NCCreateContactNavigationViewControllerDelegate, NCModalNavigationControllerDelegate;

@interface NCCreateContactNavigationViewController : NCModalNavigationController <CNContactViewControllerDelegate> {
    _UNNotificationContact *_contact;
    NSString *_bundleIdentifier;
}

@property (weak, nonatomic) id<NCModalNavigationControllerDelegate, NCCreateContactNavigationViewControllerDelegate> presenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationControllerWithContact:(id)a0 bundleIdentifier:(id)a1 imageData:(id)a2 presenterDelegate:(id)a3;

@end
