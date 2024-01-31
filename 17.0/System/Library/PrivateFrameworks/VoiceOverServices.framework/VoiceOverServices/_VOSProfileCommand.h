@class _VOSProfileMode, NSMutableSet, VOSCommand;

@interface _VOSProfileCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VOSCommand *command;
@property (retain, nonatomic) NSMutableSet *gestures;
@property (retain, nonatomic) NSMutableSet *keyboardShortcuts;
@property (retain, nonatomic) NSMutableSet *quickNavShortcuts;
@property (retain, nonatomic) NSMutableSet *secondaryCommands;
@property (weak, nonatomic) _VOSProfileMode *mode;
@property (readonly, nonatomic) BOOL hasSecondaryCommands;

+ (id)profileCommandWithCommand:(id)a0;
+ (id)profileCommandWithStringValue:(id)a0;

- (void)addKeyboardShortcut:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithCommand:(id)a0 gestures:(id)a1 keyboardShortcuts:(id)a2 quickNavShortcuts:(id)a3 secondaryCommands:(id)a4;
- (void)addQuickNavShortcut:(id)a0;
- (id)profileKeyboardShortcutForKeyChord:(id)a0;
- (void)removeSecondaryCommand:(id)a0;
- (id)description;
- (void)removeKeyboardShortcut:(id)a0;
- (void)removeGesture:(id)a0;
- (void)removeQuickNavShortcut:(id)a0;
- (void).cxx_destruct;
- (void)addGesture:(id)a0;
- (id)secondaryCommandsForPressCount:(long long)a0;
- (id)profileGestureForGesture:(id)a0;
- (id)profileQuickNavShortcutForKeyChord:(id)a0;
- (void)addSecondaryCommand:(id)a0;
- (id)initWithCoder:(id)a0;

@end
