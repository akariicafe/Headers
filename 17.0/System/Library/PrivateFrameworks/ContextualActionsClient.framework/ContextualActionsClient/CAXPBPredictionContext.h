@class NSString, NSMutableArray;

@interface CAXPBPredictionContext : PBCodable <NSCopying>

@property (nonatomic) double suggestionDate;
@property (readonly, nonatomic) BOOL hasSourceAppName;
@property (retain, nonatomic) NSString *sourceAppName;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *previousActions;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (retain, nonatomic) NSString *searchTerm;

+ (Class)contentsType;
+ (Class)previousActionsType;

- (void)clearContents;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)contentsCount;
- (void)addContents:(id)a0;
- (id)contentsAtIndex:(unsigned long long)a0;
- (void)addPreviousActions:(id)a0;
- (void)clearPreviousActions;
- (id)previousActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousActionsCount;

@end
