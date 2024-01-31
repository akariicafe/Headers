@class FBSDisplayIdentity, NSString, SBAppLayout, NSArray, NSMutableDictionary;

@interface SBFluidSwitcherSpaceTitleItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable> {
    SBAppLayout *_appLayout;
    FBSDisplayIdentity *_displayIdentity;
    NSArray *_displayItems;
    NSMutableDictionary *_displayItemToIcon;
    NSMutableDictionary *_displayItemToLoadedImage;
    NSMutableDictionary *_displayItemToSceneHandle;
    BOOL _invalidated;
}

@property (nonatomic, getter=isUsingDarkLabels) BOOL useDarkLabels;
@property (nonatomic) unsigned long long multiWindowIndicatorRoleMask;
@property (readonly, nonatomic) BOOL isChamoisWindowingEnabled;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAppLayout:(id)a0 applicationSceneHandleProvider:(id)a1 displayIdentity:(id)a2 showCanvasTitles:(BOOL)a3 isChamoisWindowingEnabled:(BOOL)a4;
- (void)invalidate;
- (void)iconImageDidUpdate:(id)a0;
- (id)_iconForDisplayItem:(id)a0;
- (id)_computeHeaderItems;
- (void).cxx_destruct;
- (void)sceneHandle:(id)a0 didChangeSceneTitle:(id)a1;
- (void)_updateDisplayItemIcons;
- (void)_loadIconForDisplayItem:(id)a0;
- (void)_performUpdateHandler;

@end
