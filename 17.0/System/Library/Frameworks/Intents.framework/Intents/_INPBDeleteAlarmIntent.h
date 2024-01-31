@class NSArray, _INPBAlarmSearch, NSString, _INPBIntentMetadata;

@interface _INPBDeleteAlarmIntent : PBCodable <_INPBDeleteAlarmIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) unsigned long long alarmsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alarmsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAlarms:(id)a0;
- (id)alarmsAtIndex:(unsigned long long)a0;
- (void)clearAlarms;

@end
