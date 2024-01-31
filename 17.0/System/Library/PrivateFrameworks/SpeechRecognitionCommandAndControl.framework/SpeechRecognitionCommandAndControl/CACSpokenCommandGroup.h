@class NSString, NSMutableArray;

@interface CACSpokenCommandGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *commandsArray;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long searchScore;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isCustom;
@property (nonatomic) BOOL isConfirmationRequired;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isGroup;
- (void)setLocale:(id)a0;
- (id)description;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)saveToPreferences;
- (id)cloneWithoutCommands;

@end
