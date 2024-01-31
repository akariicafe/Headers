@class _INPBDateTimeRangeValue, NSArray, NSString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBUpdateEventIntent : PBCodable <_INPBUpdateEventIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char removeLocation : 1; unsigned char updateAllOccurrences : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *addParticipants;
@property (readonly, nonatomic) unsigned long long addParticipantsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL removeLocation;
@property (nonatomic) BOOL hasRemoveLocation;
@property (copy, nonatomic) NSArray *removeParticipants;
@property (readonly, nonatomic) unsigned long long removeParticipantsCount;
@property (retain, nonatomic) _INPBDateTimeRangeValue *setDateTimeRange;
@property (readonly, nonatomic) BOOL hasSetDateTimeRange;
@property (retain, nonatomic) _INPBLocation *setLocation;
@property (readonly, nonatomic) BOOL hasSetLocation;
@property (copy, nonatomic) NSString *setTitle;
@property (readonly, nonatomic) BOOL hasSetTitle;
@property (copy, nonatomic) NSString *targetEventIdentifier;
@property (readonly, nonatomic) BOOL hasTargetEventIdentifier;
@property (nonatomic) BOOL updateAllOccurrences;
@property (nonatomic) BOOL hasUpdateAllOccurrences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)addParticipantsType;
+ (Class)removeParticipantsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAddParticipants:(id)a0;
- (id)addParticipantsAtIndex:(unsigned long long)a0;
- (void)addRemoveParticipants:(id)a0;
- (void)clearAddParticipants;
- (void)clearRemoveParticipants;
- (id)removeParticipantsAtIndex:(unsigned long long)a0;

@end
