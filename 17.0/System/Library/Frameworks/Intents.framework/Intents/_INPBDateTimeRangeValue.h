@class NSString, _INPBDateTime, _INPBValueMetadata, _INPBRecurrenceValue;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying> {
    struct { unsigned char allDay : 1; unsigned char endCalendar : 1; unsigned char startCalendar : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allDay;
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) long long endCalendar;
@property (nonatomic) BOOL hasEndCalendar;
@property (retain, nonatomic) _INPBDateTime *endDateTime;
@property (readonly, nonatomic) BOOL hasEndDateTime;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property (readonly, nonatomic) BOOL hasRecurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic) BOOL hasStartCalendar;
@property (retain, nonatomic) _INPBDateTime *startDateTime;
@property (readonly, nonatomic) BOOL hasStartDateTime;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
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

@end
