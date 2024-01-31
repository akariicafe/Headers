@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char ratioType : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (nonatomic) BOOL hasRatioType;
@property (nonatomic) int ratioType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)locationAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsLocation:(id)a0;
- (int)StringAsRatioType:(id)a0;
- (id)ratioTypeAsString:(int)a0;

@end
