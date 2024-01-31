@class NSString, NSArray, NSDictionary, NSData, _SFPBGraphicalFloat;

@interface _SFPBSearchSuggestion : PBCodable <_SFPBSearchSuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) _SFPBGraphicalFloat *score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL previouslyEngaged;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *utteranceText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSDictionary *serverFeatures;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addDuplicateSuggestions:(id)a0;
- (void)clearDuplicateSuggestions;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)duplicateSuggestionsCount;
- (BOOL)getServerFeatures:(double *)a0 forKey:(id)a1;
- (void)setServerFeatures:(double)a0 forKey:(id)a1;

@end
