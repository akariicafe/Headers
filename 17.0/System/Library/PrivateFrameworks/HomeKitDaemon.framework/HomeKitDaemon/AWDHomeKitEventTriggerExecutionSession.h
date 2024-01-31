@class NSString, NSMutableArray;

@interface AWDHomeKitEventTriggerExecutionSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char executionState : 1; unsigned char resultErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableArray *triggerEvents;
@property (retain, nonatomic) NSMutableArray *endEvents;
@property (nonatomic) BOOL hasExecutionState;
@property (nonatomic) int executionState;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) int resultErrorCode;

+ (Class)endEventsType;
+ (Class)triggerEventsType;

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
- (int)StringAsExecutionState:(id)a0;
- (void)addEndEvents:(id)a0;
- (void)addTriggerEvents:(id)a0;
- (void)clearEndEvents;
- (void)clearTriggerEvents;
- (id)endEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)endEventsCount;
- (id)executionStateAsString:(int)a0;
- (id)triggerEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)triggerEventsCount;

@end
