@class NSString, NSLocale, NSCharacterSet, AXSSLanguageMap;

@interface AXSSDialectMap : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *voiceIdentifier;
@property (copy, nonatomic) NSCharacterSet *speakableCharacters;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;
@property (readonly, weak, nonatomic) AXSSLanguageMap *languageMap;
@property (readonly, copy, nonatomic) NSString *regionID;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDialectSecondaryForCharacter:(unsigned short)a0;
- (BOOL)canSpeakString:(id)a0;
- (BOOL)canSpeakCharacter:(unsigned short)a0;
- (id)initWithLocale:(id)a0 voiceName:(id)a1 specificLanguageID:(id)a2 voiceIdentifier:(id)a3 speakableCharacters:(id)a4 secondaryLanguageRange:(id)a5;

@end
