@class NSString;

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char horizontalAccuracy : 1; unsigned char horizontalDistance : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) BOOL hasHorizontalDistance;
@property (nonatomic) int horizontalDistance;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
