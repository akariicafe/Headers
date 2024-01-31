@class NSString, NSData, SECSFAAction;

@interface SECSFARule : PBCodable <NSCopying> {
    struct { unsigned char repeatAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEventType;
@property (retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL hasMatch;
@property (retain, nonatomic) NSData *match;
@property (readonly, nonatomic) BOOL hasAction;
@property (retain, nonatomic) SECSFAAction *action;
@property (nonatomic) BOOL hasRepeatAfterSeconds;
@property (nonatomic) long long repeatAfterSeconds;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;

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
