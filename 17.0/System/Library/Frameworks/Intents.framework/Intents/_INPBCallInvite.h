@class NSArray, _INPBURLValue, NSString;

@interface _INPBCallInvite : PBCodable <_INPBCallInvite, NSSecureCoding, NSCopying> {
    struct { unsigned char inviteType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBURLValue *callURL;
@property (readonly, nonatomic) BOOL hasCallURL;
@property (nonatomic) int inviteType;
@property (nonatomic) BOOL hasInviteType;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) unsigned long long participantsCount;
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
- (int)StringAsInviteType:(id)a0;
- (id)inviteTypeAsString:(int)a0;

@end
