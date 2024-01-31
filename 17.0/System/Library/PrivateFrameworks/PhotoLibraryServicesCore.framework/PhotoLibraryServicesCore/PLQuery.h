@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying> {
    struct { unsigned char conjunction : 1; } _has;
}

@property (nonatomic) BOOL hasConjunction;
@property (nonatomic) int conjunction;
@property (readonly, nonatomic) BOOL hasFirst;
@property (retain, nonatomic) PLQuery *first;
@property (readonly, nonatomic) BOOL hasSecond;
@property (retain, nonatomic) PLQuery *second;
@property (retain, nonatomic) NSMutableArray *singleQueries;

+ (Class)singleQueriesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addSingleQueries:(id)a0;
- (void)clearSingleQueries;
- (void)writeTo:(id)a0;
- (id)singleQueriesAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)singleQueriesCount;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)logDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
