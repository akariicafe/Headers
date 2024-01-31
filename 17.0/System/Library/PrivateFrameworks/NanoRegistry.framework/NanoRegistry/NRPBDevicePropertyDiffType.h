@class NRPBDevicePropertyDiff;

@interface NRPBDevicePropertyDiffType : PBCodable <NSCopying> {
    struct { unsigned char changeType : 1; } _has;
}

@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasDiff;
@property (retain, nonatomic) NRPBDevicePropertyDiff *diff;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (id)description;
- (id)changeTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
