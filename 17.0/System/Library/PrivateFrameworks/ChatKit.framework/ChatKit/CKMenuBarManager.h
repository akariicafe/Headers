@class NSArray, UIKeyCommand;

@interface CKMenuBarManager : NSObject

@property (retain, nonatomic) NSArray *filterCommands;
@property (retain, nonatomic) UIKeyCommand *allMessagesCommand;
@property (retain, nonatomic) UIKeyCommand *knownSenderCommand;
@property (retain, nonatomic) UIKeyCommand *unknownSenderCommand;
@property (retain, nonatomic) UIKeyCommand *unreadFilterCommand;
@property (retain, nonatomic) UIKeyCommand *recentlyDeletedCommand;
@property (retain, nonatomic) UIKeyCommand *oscarCommand;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allKeyboardShortcutKeyCommands;

@end
