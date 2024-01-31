@class NSMutableArray;

@interface KCellularPmuAverageCurrent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *regulatorCurrents;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)regulatorCurrentType;

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
- (void)addRegulatorCurrent:(id)a0;
- (void)clearRegulatorCurrents;
- (id)regulatorCurrentAtIndex:(unsigned long long)a0;
- (unsigned long long)regulatorCurrentsCount;

@end
