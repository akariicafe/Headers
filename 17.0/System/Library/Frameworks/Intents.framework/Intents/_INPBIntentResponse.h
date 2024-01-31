@class NSString, _INPBUserActivity, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess;

@interface _INPBIntentResponse : PBCodable <_INPBIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char requiresAuthentication : 1; unsigned char requiresProtectedData : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure;
@property (readonly, nonatomic) BOOL hasPayloadFailure;
@property (retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL hasRequiresAuthentication;
@property (nonatomic) BOOL requiresProtectedData;
@property (nonatomic) BOOL hasRequiresProtectedData;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (readonly, nonatomic) BOOL hasUserActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
