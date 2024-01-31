@class NSString, NSMutableDictionary, CSLockScreenTestPluginSettings, SBLockScreenPlugin;
@protocol SBLockScreenPluginManagerDelegate;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider> {
    NSMutableDictionary *_plugins;
    CSLockScreenTestPluginSettings *_testSettings;
}

@property (readonly, nonatomic) SBLockScreenPlugin *activePlugin;
@property (readonly, nonatomic) SBLockScreenPlugin *displayedPlugin;
@property (weak, nonatomic) id<SBLockScreenPluginManagerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pluginController:(id)a0 updateAppearance:(id)a1;
- (BOOL)enableLockScreenPluginWithContext:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)pluginController:(id)a0 sendAction:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_handleUIRelock;
- (void)_refreshLockScreenPlugin;
- (void)deactivatePluginController:(id)a0;
- (id)_pluginForPluginController:(id)a0;
- (void)activatePluginController:(id)a0;
- (id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)disableLockScreenPluginWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_sendEventToPlugin:(id /* block */)a0;
- (void)_setActivePlugin:(id)a0 displayedPlugin:(id)a1;
- (id)succinctDescription;
- (BOOL)_loadLockScreenPluginWithContext:(id)a0;
- (BOOL)handleEvent:(long long)a0;
- (BOOL)_handlePluginDisabled:(id)a0 withContext:(id)a1;
- (id)lockScreenActionContext;

@end
