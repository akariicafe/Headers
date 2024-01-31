@class NSString, _INPBAlarm;

@interface _INPBCreateAlarmIntentResponse : PBCodable <_INPBCreateAlarmIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char successCode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAlarm *createdAlarm;
@property (readonly, nonatomic) BOOL hasCreatedAlarm;
@property (nonatomic) int successCode;
@property (nonatomic) BOOL hasSuccessCode;
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
- (int)StringAsSuccessCode:(id)a0;
- (id)successCodeAsString:(int)a0;

@end
