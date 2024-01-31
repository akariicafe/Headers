@class NSString, ICRankingQueriesDefinition, NSDictionary, NSArray, CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject

@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL needsLazyInitialization;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;
@property (readonly, nonatomic) NSDictionary *highlightInfo;
@property (readonly, nonatomic) double rankingScore;
@property (readonly, nonatomic) NSArray *attachmentUniqueIdentifiers;
@property (readonly, nonatomic) unsigned long long relevanceBitField;
@property (readonly, nonatomic) BOOL isPrefixMatch;
@property (readonly, nonatomic) unsigned long long modificationDateBucket;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned long long searchResultType;

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSearchableItem:(id)a0 highlightInfo:(id)a1 rankingScore:(double)a2 attachmentUniqueIdentifiers:(id)a3;
- (id)initWithSearchableItem:(id)a0 searchString:(id)a1 rankingQueriesDefinition:(id)a2 rankingScore:(double)a3 attachmentUniqueIdentifiers:(id)a4 language:(id)a5;
- (void)lazilyInitializeHighlightInfoAndIsPrefixMatchIfNecessary;

@end
