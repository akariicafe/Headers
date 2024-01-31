@class UINavigationItem;

@interface VideosUI.LibraryFamilyMembersViewController : VUIBaseViewController <VUIFamilyMembersViewControllerDelegate> {
    void /* unknown type, empty encoding */ familyController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)familyMemberViewController:(id)a0 didSelectFamilyMember:(id)a1;
- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewDidLayoutSubviews;

@end
