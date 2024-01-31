@class NSSet, NSMutableDictionary, NSString, INFGrammarCollection;

@interface INFSentence : NSObject

@property (retain, nonatomic) NSMutableDictionary *relationships;
@property (retain, nonatomic) NSMutableDictionary *placeholdersToTokens;
@property (retain, nonatomic) NSSet *placeholders;
@property (weak, nonatomic) INFGrammarCollection *collection;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *format;
@property (readonly, nonatomic) NSString *resolvedSentence;

+ (id)sentenceWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setNumber:(id)a0 forPlaceholder:(id)a1;
- (void)setToken:(id)a0 forPlaceholder:(id)a1;
- (id)concreteToken:(id)a0 in:(id)a1;
- (BOOL)containsUnresolvedTokens:(id)a0;
- (id)filteredPlaceholders;
- (void)generatePlaceholders;
- (void)placeholder:(id)a0 dependsOn:(id)a1;
- (void)reportCyclesIfAny;
- (id)unresolvedInArray:(id)a0;

@end
