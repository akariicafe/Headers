@class NSString;

@interface BMPBSiriExecutionEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char taskStep : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasTaskStep;
@property (nonatomic) int taskStep;
@property (readonly, nonatomic) BOOL hasStatusReason;
@property (retain, nonatomic) NSString *statusReason;
@property (readonly, nonatomic) BOOL hasSlotValue;
@property (retain, nonatomic) NSString *slotValue;
@property (readonly, nonatomic) BOOL hasIntentName;
@property (retain, nonatomic) NSString *intentName;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) BOOL hasInteractionId;
@property (retain, nonatomic) NSString *interactionId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;

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
- (int)StringAsTaskStep:(id)a0;
- (id)taskStepAsString:(int)a0;

@end
