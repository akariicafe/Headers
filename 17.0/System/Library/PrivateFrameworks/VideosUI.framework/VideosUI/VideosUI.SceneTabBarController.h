@class NSArray;

@interface VideosUI.SceneTabBarController : NSObject <VUITabBarProtocol> {
    void /* unknown type, empty encoding */ _tabBarInfo;
    void /* unknown type, empty encoding */ previousSelectedIndex;
    void /* unknown type, empty encoding */ hasSetTabbarIndex;
}

@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL tabBarHidden;

- (id)init;
- (BOOL)isTabBarHidden;
- (void).cxx_destruct;
- (void)willResignActive:(id)a0;
- (void)willTerminate:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1 appContext:(id)a2;

@end
