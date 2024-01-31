@class NSString, SBIconController, SBRecentAppLayouts;
@protocol SBAppSwitcherModelDelegate;

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate> {
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
}

@property (class, readonly, nonatomic) NSString *appSwitcherHeaderIconImageDescriptorName;

@property (weak, nonatomic) id<SBAppSwitcherModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_recentAppLayoutsController;
- (id)init;
- (void)dealloc;
- (id)appLayoutsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)remove:(id)a0;
- (void)noteDisplayItemLayoutAttributesMapChangedForAppLayout:(id)a0 displayOrdinal:(long long)a1;
- (void)addAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeAppLayouts:(id)a0;
- (void)recentAppLayouts:(id)a0 didRemoveAppLayoutForFallingOffList:(id)a1;
- (void)modifyWithDropContext:(id)a0;
- (long long)_adjustedIndexForVisibleAppLayoutAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)indexOfDisplayItem:(id)a0 visible:(BOOL)a1;
- (id)initWithIconController:(id)a0 applicationController:(id)a1 recents:(id)a2;
- (void)addAppLayout:(id)a0 afterAppLayout:(id)a1;
- (void)_warmUpIconsForAppLayout:(id)a0;
- (void)replaceAppLayout:(id)a0 withAppLayout:(id)a1;
- (void)addToFront:(id)a0;
- (id)recentAppLayouts:(id)a0 willReplaceAppLayout:(id)a1 proposedReplacementAppLayout:(id)a2;
- (id)appLayoutContainingDisplayItem:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (id)recentAppLayouts:(id)a0 willAddAppLayout:(id)a1 replacingAppLayouts:(id)a2 removingAppLayouts:(id)a3;
- (void)_warmUpIconsForRecentAppLayouts:(id)a0;
- (id)appLayoutsIncludingHiddenAppLayouts:(BOOL)a0;
- (void)hide:(id)a0;
- (id)bestLastDisplayItemLayoutAttributesMapForAppLayout:(id)a0 displayOrdinal:(long long)a1;
- (id)recentDisplayItemsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;

@end
