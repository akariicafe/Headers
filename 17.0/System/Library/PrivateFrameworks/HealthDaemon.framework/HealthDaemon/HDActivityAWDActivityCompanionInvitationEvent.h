@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char action : 1; unsigned char failureReason : 1; unsigned char stage : 1; unsigned char retryExpected : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) int stage;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasRetryExpected;
@property (nonatomic) BOOL retryExpected;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (int)StringAsFailureReason:(id)a0;
- (id)failureReasonAsString:(int)a0;
- (int)StringAsStage:(id)a0;
- (id)stageAsString:(int)a0;

@end
