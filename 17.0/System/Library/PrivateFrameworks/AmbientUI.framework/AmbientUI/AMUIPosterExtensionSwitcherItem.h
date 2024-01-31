@class NSString, AMUIPosterCategoryViewController, NSArray, UIView, UIViewController;
@protocol AMUIDateProviding, AMUIPosterCategoryViewControllerDelegate, NSObject;

@interface AMUIPosterExtensionSwitcherItem : NSObject <AMUISwitcherItem> {
    AMUIPosterCategoryViewController *_posterCategoryViewController;
    NSArray *_configurations;
    id<AMUIDateProviding> _dateProvider;
    NSString *_providerBundleIdentifier;
    id<AMUIPosterCategoryViewControllerDelegate> _posterCategoryViewControllerDelegate;
}

@property (readonly, nonatomic) UIView *itemView;
@property (readonly, nonatomic) id<NSObject> identifier;
@property (readonly, nonatomic) UIViewController *itemViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithProviderBundleIdentifier:(id)a0 configurations:(id)a1 posterCategoryViewControllerDelegate:(id)a2 dateProvider:(id)a3;
- (void)switcherItemDidAppear:(id)a0;
- (void)switcherItemDidDisappear:(id)a0;
- (void)switcherItemWillAppear:(id)a0;
- (void)switcherItemWillDisappear:(id)a0;

@end
