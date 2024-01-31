@class NSMutableArray;

@interface GEOLogMsgEventNetworkEventSummary : PBCodable <NSCopying> {
    NSMutableArray *_groups;
}

@property (retain, nonatomic) NSMutableArray *groups;

+ (BOOL)isValid:(id)a0;
+ (Class)groupsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addGroups:(id)a0;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;

@end
