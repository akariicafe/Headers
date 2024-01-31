@class NSMutableArray;

@interface AWDProactiveAppPredictionActionTimeEstimate : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addAction:(id)a0;
- (id)actionAtIndex:(unsigned long long)a0;
- (void)clearActions;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)actionsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
