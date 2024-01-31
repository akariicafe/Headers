@class UIViewController, NSSet, HFItem, NSString, HUQuickControlPresentationItemManager, HMHome;
@protocol HUDetailsPresentationDelegateHost, HFHomeKitObject, NSCopying, HMApplicationData;

@interface HUQuickControlPresentationContext : NSObject <NSCopying>

@property (nonatomic) unsigned long long colorStyle;
@property (retain, nonatomic) HFItem<NSCopying> *item;
@property (copy, nonatomic) NSSet *controlItems;
@property (retain, nonatomic) HUQuickControlPresentationItemManager *itemManager;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HFHomeKitObject, HMApplicationData> parentViewHomeKitObject;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) NSString *tappedArea;
@property (nonatomic) BOOL didAuthenticate;
@property (nonatomic) BOOL prefersSystemTransitions;
@property (nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle;
@property (retain, nonatomic) UIViewController<HUDetailsPresentationDelegateHost> *detailsViewController;
@property (nonatomic) BOOL isConfiguredForNonHomeUser;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
