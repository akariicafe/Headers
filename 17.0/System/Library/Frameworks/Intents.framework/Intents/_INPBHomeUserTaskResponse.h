@class NSString, _INPBHomeUserTask;

@interface _INPBHomeUserTaskResponse : PBCodable <_INPBHomeUserTaskResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char taskOutcome : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int taskOutcome;
@property (nonatomic) BOOL hasTaskOutcome;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (readonly, nonatomic) BOOL hasUserTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTaskOutcome:(id)a0;
- (id)taskOutcomeAsString:(int)a0;

@end
