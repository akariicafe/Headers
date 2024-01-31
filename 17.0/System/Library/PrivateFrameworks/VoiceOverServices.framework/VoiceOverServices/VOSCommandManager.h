@class NSString, NSObject, VOSCommandProfile;
@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_siriShortCutToken;
}

@property (nonatomic) BOOL activeProfileIsUserProfile;
@property (nonatomic) BOOL loadShortcuts;
@property (readonly, nonatomic) VOSCommandProfile *activeProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allShortcutBindingsWithResolver:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_loadSystemProfile;
- (id)allSiriShortcutCommandsWithResolver:(id)a0;
- (id)shortcutBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)validateCanAddGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)systemProfile;
- (id)allCommandsWithResolver:(id)a0;
- (id)removeKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (void)reloadWithSystemProfile;
- (id)gestureBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)availableSiriShortcuts:(id)a0;
- (unsigned long long)availabilityForCommand:(id)a0 withResolver:(id)a1;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)a0;
- (id)commandForKeyChord:(id)a0 withResolver:(id)a1;
- (id)validateCanRemoveKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (void)reloadPreferringUserProfile;
- (id)addGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (BOOL)commandHasAnyBindings:(id)a0 withResolver:(id)a1;
- (id)initPreferringUserProfileWithoutShortcuts;
- (id)validateCanAddKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (BOOL)_validateUserProfileDiscrepancies:(id)a0;
- (id)commandForTouchGesture:(id)a0 withResolver:(id)a1;
- (void).cxx_destruct;
- (void)batchUpdateActiveProfile:(id /* block */)a0 saveIfSuccessful:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)a0 withResolver:(id)a1;
- (unsigned long long)availabilityForGesture:(id)a0 withResolver:(id)a1;
- (void)_commonUserProfileInit;
- (unsigned long long)availabilityForShortcut:(id)a0 withResolver:(id)a1;
- (id)initWithSystemProfile;
- (void)saveAsUserProfile;
- (id)initPreferringUserProfile;
- (id)removeGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (void)_commonInit;
- (void)restoreDefaultProfile;
- (id)addKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanRemoveGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;

@end
