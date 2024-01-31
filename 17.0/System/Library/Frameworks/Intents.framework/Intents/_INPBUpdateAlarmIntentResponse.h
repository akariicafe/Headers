@class NSArray, _INPBAlarm, NSString;

@interface _INPBUpdateAlarmIntentResponse : PBCodable <_INPBUpdateAlarmIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *conflictAlarms;
@property (readonly, nonatomic) unsigned long long conflictAlarmsCount;
@property (retain, nonatomic) _INPBAlarm *updatedAlarm;
@property (readonly, nonatomic) BOOL hasUpdatedAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)conflictAlarmsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addConflictAlarms:(id)a0;
- (void)clearConflictAlarms;
- (id)conflictAlarmsAtIndex:(unsigned long long)a0;

@end
