@class NSArray, NSString, AXReplayableGesture, NSMutableDictionary, CACRecordedUserActionFlow;

@interface CACSpokenCommandItem : CACSpokenCommandGroup {
    NSMutableDictionary *_customDictionary;
}

@property (retain, nonatomic) NSArray *searchAlternates;
@property (retain, nonatomic) NSString *customScope;
@property (retain, nonatomic) NSString *customAppName;
@property (retain, nonatomic) AXReplayableGesture *customGesture;
@property (retain, nonatomic) CACRecordedUserActionFlow *customUserActionFlow;
@property (retain, nonatomic) NSString *customTextToInsert;
@property (retain, nonatomic) NSString *customType;
@property (retain, nonatomic) NSArray *customPasteBoard;
@property (retain, nonatomic) NSString *customShortcutsWorkflowIdentifier;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *untranslatedDisplayString;
@property (retain, nonatomic) NSString *untranslatedLocale;
@property (retain, nonatomic) id commandInfo;
@property (nonatomic) BOOL isEdited;
@property (nonatomic) BOOL isCollapsed;

+ (id)newCommandItemWithLocale:(id)a0 scope:(id)a1;

- (void)setDisplayString:(id)a0;
- (id)displayString;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isGroup;
- (void)setIsEnabled:(BOOL)a0;
- (id)copy;
- (id)description;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)saveToPreferences;
- (void)removeFromPreferences;
- (id)primaryBuiltinCommandForLocale:(id)a0;
- (id)_customCommandStringsWithLocale:(id)a0;
- (void)_reloadFromProperties:(id)a0;
- (void)_saveKey:(id)a0 toDictionary:(id)a1;
- (void)_setCustomCommandStrings:(id)a0 withLocale:(id)a1;
- (void)_updateBuiltInCommandsWithLocale:(id)a0;
- (id)cloneWithoutCommands;
- (id)commandsArray;
- (BOOL)conflictsWithItem:(id)a0;
- (id)dictionaryForSavingToPreferences;
- (BOOL)evaluateCommandPredicate:(id)a0;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 locale:(id)a2;
- (void)refreshDataFromPreferences;
- (void)setIsConfirmationRequired:(BOOL)a0;
- (void)setValue:(id)a0 forKey:(id)a1 locale:(id)a2;
- (id)sortString;
- (id)untranslatedDisplayStringAndLocale:(id *)a0;
- (id)valueForKey:(id)a0 locale:(id)a1;

@end
