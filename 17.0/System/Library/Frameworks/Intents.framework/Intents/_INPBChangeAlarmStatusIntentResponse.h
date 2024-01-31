@class NSArray, NSString;

@interface _INPBChangeAlarmStatusIntentResponse : PBCodable <_INPBChangeAlarmStatusIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *modifiedAlarms;
@property (readonly, nonatomic) unsigned long long modifiedAlarmsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)modifiedAlarmsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addModifiedAlarms:(id)a0;
- (void)clearModifiedAlarms;
- (id)modifiedAlarmsAtIndex:(unsigned long long)a0;

@end
