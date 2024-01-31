@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char batchCount : 1; unsigned char batchDroppedCount : 1; unsigned char requiredRuntimeConfirmation : 1; unsigned char showsNotification : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (nonatomic) BOOL hasRequiredRuntimeConfirmation;
@property (nonatomic) BOOL requiredRuntimeConfirmation;
@property (nonatomic) BOOL hasBatchCount;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) BOOL hasBatchDroppedCount;
@property (nonatomic) unsigned int batchDroppedCount;
@property (nonatomic) BOOL hasShowsNotification;
@property (nonatomic) BOOL showsNotification;

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

@end
