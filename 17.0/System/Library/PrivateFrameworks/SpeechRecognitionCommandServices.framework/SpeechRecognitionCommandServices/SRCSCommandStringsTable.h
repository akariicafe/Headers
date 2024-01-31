@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface SRCSCommandStringsTable : NSObject {
    NSString *_localeIdentifier;
    struct __CFStringTokenizer { } *_wordUnitStringTokenizer;
    NSDictionary *_commandStringsCache;
    NSDictionary *_commandDescriptionsCache;
    NSMutableDictionary *_keyboardKeyNamesCache;
    NSMutableDictionary *_modifierKeyNamesCache;
    NSMutableDictionary *_phoneticKeyNamesCache;
    NSMutableDictionary *_parameterIdentifiersToExamplesTable;
}

@property (class, readonly, nonatomic) NSArray *supportedTargetTypes;
@property (class, readonly, nonatomic) NSArray *activeTargetTypes;
@property (class, copy, nonatomic) id /* block */ commandStringsLoader;
@property (class, readonly, nonatomic) NSString *deviceName;

+ (id)componentsFromLocaleIdentifier:(id)a0;
+ (BOOL)isLocaleIdentifier:(id)a0 containedInLocaleIdentifiers:(id)a1;
+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)languageModelDictionaryFromCommandText:(id)a0 parsingErrorString:(id *)a1;
+ (id)formattedBuiltInCommandString:(id)a0;

- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)supportedCommandIdentifiersForTargetTypes:(id)a0;
- (id)spokenStringPermutationsOfLanguageModelDictionary:(id)a0 stringsTable:(id)a1;
- (id)descriptionStringForCommandIdentifier:(id)a0 descriptionType:(id)a1 targetTypes:(id)a2;
- (BOOL)isSupportedCommandIdentifier:(id)a0 forLocaleIdentifier:(id)a1;
- (id)languageModelDictionaryForCommandIdentifier:(id)a0 targetTypes:(id)a1 parsingErrorString:(id *)a2;
- (void)resolveReferencesInMutableAttributedString:(id)a0 stringsTable:(id)a1;
- (id)spokenStringPermutationsOfLanguageModelDictionary:(id)a0 stringsTable:(id)a1 restrictPermutationsToShortestAndLongest:(BOOL)a2;
- (id)unparsedCommandTextForCommandIdentifier:(id)a0 targetTypes:(id)a1;
- (id)_commandDescriptionsTable;
- (id)_commandStringsTable;
- (id)_commandStringsDictionaryForLocaleIdentifier:(id)a0;
- (id)_descriptionTypeForParameterIdentifier:(id)a0 commandIdentifier:(id)a1;
- (id)_exampleStringPermutationsFromCommandIdentifier:(id)a0;
- (void)_flushCommandStringsTable;
- (id)_keyboardKeyNamesTable;
- (id)_modifierKeyNamesTable;
- (id)_phoneticKeyNamesTable;
- (void)_removeDuplicateSpacesFromMutableString:(id)a0;
- (id)_rootCommandIdentifierFrom:(id)a0 foundTargetType:(id *)a1;
- (id)_spokenStringPermutationOfLanguageModelDictionary:(id)a0 givenPermutation:(unsigned short *)a1 stringsTable:(id)a2 segmentOffsets:(id)a3;
- (id)_warningsOfIncorrectTokenizationAcrossSegmentBoundariesInLanguageModelDictionary:(id)a0 stringsTable:(id)a1;
- (unsigned long long)countOptionalNodesOfLanguageModelDictionary:(id)a0;
- (id)exampleParameterStringsTable;
- (BOOL)isSupportedCommandIdentifier:(id)a0 forTargetTypes:(id)a1;
- (id)languageModelDictionaryForCommandIdentifier:(id)a0 targetType:(id)a1 parsingErrorString:(id *)a2;
- (id)mutableAttributedStringByReplacingPlaceholderAttribute:(id)a0 withAttributeName:(id)a1 inAttributedString:(id)a2 withValueTable:(id)a3;
- (id)mutableAttributedStringCommandDescriptionForCommandIdentifier:(id)a0 calculateDisplayedAttributedStringWidthBlock:(id /* block */)a1;
- (id)parameterIdentifiersFromCommandIdentifier:(id)a0;
- (id)rowDataForTargetTypes:(id)a0;
- (id)setOfBuiltInIdentifiersFromLanguageModelDictionary:(id)a0;
- (id)spokenStringPermutationOfLanguageModelDictionary:(id)a0 givenPermutation:(unsigned short *)a1 stringsTable:(id)a2;
- (id)warningStringForText:(id)a0 identifier:(id)a1 textTable:(id)a2;

@end
