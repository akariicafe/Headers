@class NSMutableSet;
@protocol VOSCommandProfileDelegate;

@interface VOSCommandProfile : NSObject <NSSecureCoding> {
    NSMutableSet *_modes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<VOSCommandProfileDelegate> delegate;

+ (void)_addQuickNavShortcutsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (id)_parseProfileProperties:(id)a0 overlayProperties:(id)a1;
+ (void)_addSecondaryCommandsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (void)_addKeyboardShortcutsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (id)_profileKeyChordsFromDictionaryValue:(id)a0;
+ (BOOL)_overlay:(id)a0 shouldIncludeItem:(id)a1;
+ (void)_addGesturesToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;

- (id)allShortcutBindingsWithResolver:(id)a0;
- (id)_resolvedSecondaryCommandForProfileCommand:(id)a0 resolver:(id)a1;
- (id)allSiriShortcutCommandsWithResolver:(id)a0;
- (id)_initWithModes:(id)a0;
- (id)shortcutBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)validateCanAddGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)allCommandsWithResolver:(id)a0;
- (id)removeKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)gestureBindingsForCommand:(id)a0 withResolver:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)availabilityForCommand:(id)a0 withResolver:(id)a1;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)a0;
- (id)commandForKeyChord:(id)a0 withResolver:(id)a1;
- (id)validateCanRemoveKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)addGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (BOOL)commandHasAnyBindings:(id)a0 withResolver:(id)a1;
- (id)validateCanAddKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)initWithProfileProperties:(id)a0 overlayProperties:(id)a1;
- (id)commandForTouchGesture:(id)a0 withResolver:(id)a1;
- (id)_modifiedGestureRespectingHandednessSetting:(id)a0;
- (void).cxx_destruct;
- (BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)a0 withResolver:(id)a1;
- (id)_profileCommandForCommand:(id)a0 inMode:(id)a1;
- (unsigned long long)availabilityForGesture:(id)a0 withResolver:(id)a1;
- (unsigned long long)availabilityForShortcut:(id)a0 withResolver:(id)a1;
- (id)debugDescription;
- (id)removeGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)_profileModeForResolver:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_profileModeForScreenreaderMode:(id)a0;
- (id)addKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanRemoveGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;

@end
