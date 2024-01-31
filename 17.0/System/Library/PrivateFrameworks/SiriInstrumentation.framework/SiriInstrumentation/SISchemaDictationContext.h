@class NSString, NSArray, SISchemaLocaleIdentifier, SISchemaUUID, NSData;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) BOOL hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) SISchemaUUID *textInputSessionId;
@property (nonatomic) BOOL hasTextInputSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addDictationLocalesEnabled:(id)a0;
- (void)addKeyboardLocalesEnabled:(id)a0;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)a0;
- (void)clearDictationLocalesEnabled;
- (void)clearKeyboardLocalesEnabled;
- (void)deleteBundleId;
- (void)deleteDictationLocale;
- (void)deleteDictationLocalesEnabled;
- (void)deleteKeyboardLanguage;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardLocalesEnabled;
- (void)deleteSiriSelectedLocale;
- (void)deleteTextInputSessionId;
- (void)deleteUserSelectedLocale;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)keyboardLocalesEnabledCount;

@end
