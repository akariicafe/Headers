@interface AWDWiFiMetricsManagerStateMachine : PBCodable <NSCopying> {
    struct { unsigned char stateDuration : 1; unsigned char stateChanges : 1; } _has;
}

@property (nonatomic) BOOL hasStateChanges;
@property (nonatomic) unsigned int stateChanges;
@property (nonatomic) BOOL hasStateDuration;
@property (nonatomic) unsigned long long stateDuration;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
