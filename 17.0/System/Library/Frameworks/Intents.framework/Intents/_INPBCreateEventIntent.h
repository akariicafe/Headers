@class _INPBDateTimeRangeValue, NSArray, NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBCreateEventIntent : PBCodable <_INPBCreateEventIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)participantsType;

- (void)addParticipants:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearParticipants;
- (void).cxx_destruct;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
