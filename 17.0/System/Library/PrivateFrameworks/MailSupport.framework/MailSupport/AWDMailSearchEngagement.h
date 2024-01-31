@class NSMutableArray, AWDMailUserSuggestionsEngagment;

@interface AWDMailSearchEngagement : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _atoms;
    struct { unsigned char numSearchResults : 1; unsigned char searchScope : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long atomsCount;
@property (readonly, nonatomic) int *atoms;
@property (nonatomic) BOOL hasSearchScope;
@property (nonatomic) int searchScope;
@property (nonatomic) BOOL hasNumSearchResults;
@property (nonatomic) unsigned long long numSearchResults;
@property (retain, nonatomic) NSMutableArray *engagements;
@property (readonly, nonatomic) BOOL hasSuggestionsEngagement;
@property (retain, nonatomic) AWDMailUserSuggestionsEngagment *suggestionsEngagement;

+ (Class)engagementsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAtoms:(id)a0;
- (int)StringAsSearchScope:(id)a0;
- (void)addEngagements:(id)a0;
- (void)setAtoms:(int *)a0 count:(unsigned long long)a1;
- (void)addAtoms:(int)a0;
- (id)atomsAsString:(int)a0;
- (int)atomsAtIndex:(unsigned long long)a0;
- (void)clearAtoms;
- (void)clearEngagements;
- (id)engagementsAtIndex:(unsigned long long)a0;
- (unsigned long long)engagementsCount;
- (id)initWithAtoms:(id)a0 searchScope:(BOOL)a1 suggestionsEngagement:(id)a2;
- (id)searchScopeAsString:(int)a0;

@end
