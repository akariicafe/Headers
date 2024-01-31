@class NSString, NSMutableDictionary, NSValue, NSArray;

@interface RKSentenceClassifier : NSObject

@property (readonly) NSString *languageIdentifier;
@property (retain) NSMutableDictionary *partofSpeechAvailabilityByLanguage;
@property (retain) NSMutableDictionary *lemmaAvailabilityByLanguage;
@property (retain) NSString *sentenceStringOriginal;
@property (retain) NSString *sentenceString;
@property BOOL sentenceIsTerminated;
@property BOOL sentenceIsAllSymbols;
@property BOOL sentenceHasQuestionTerminator;
@property BOOL sentenceHasAlternativeConjunction;
@property (retain) NSValue *sentenceTag;
@property (retain) NSArray *inversions;
@property (retain) NSArray *interrogatives;
@property (retain) NSArray *choiceDelimiters;
@property (retain) NSArray *alternatives;
@property (retain) NSArray *appreciations;
@property (retain) NSArray *dataDetected;
@property (retain) NSString *RKLinguisticTagDataDetected;
@property (readonly) NSArray *alternativeConjunctions;
@property (retain) NSArray *sentenceEntities;
@property (retain) NSArray *matchedRanges;

+ (id)languageIdentifierFromClassName;
+ (id)alternativeInversionsForLanguage:(id)a0;
+ (id)appreciationKeywordsForLanguage:(id)a0;
+ (BOOL)canClassifyLanguageIdentifier:(id)a0;
+ (id)categoryKeywordMapForLanguage:(id)a0;
+ (id)polarTagRegularExpressionForLanguage:(id)a0;
+ (id)preProcessTextMessageForLinguisticTagger:(id)a0 withLocale:(id)a1;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)a0;
+ (id)sentenceClassification:(id)a0 withLanguageIdentifier:(id)a1 options:(unsigned long long)a2;
+ (id)stringFromLexicalEntities:(id)a0;
+ (Class)subclassForLanguageIdentifier:(id)a0;
+ (Class)subclassForLocale:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)analyzeSentence;
- (id)sentenceClassification:(id)a0 options:(unsigned long long)a1;
- (id)addSentenceTerminatorQuestion:(id)a0;
- (id)classifySentence;
- (id)lexicalEntitiesFromString:(id)a0;

@end
