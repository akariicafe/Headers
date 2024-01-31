@class NSString;

@interface SearchUIContactViewNavigationController : UINavigationController <CNContactViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
