@class NSString;

@interface AWDCoreRoutineFMCAssistanceInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char assistanceType : 1; unsigned char assistanceValue : 1; unsigned char uiPlacement : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasParkingId;
@property (retain, nonatomic) NSString *parkingId;
@property (nonatomic) BOOL hasAssistanceType;
@property (nonatomic) int assistanceType;
@property (nonatomic) BOOL hasAssistanceValue;
@property (nonatomic) int assistanceValue;
@property (nonatomic) BOOL hasUiPlacement;
@property (nonatomic) int uiPlacement;

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
