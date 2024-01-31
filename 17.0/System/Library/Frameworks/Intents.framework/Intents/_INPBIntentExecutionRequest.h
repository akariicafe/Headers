@class NSString, _INPBAppIdentifier;

@interface _INPBIntentExecutionRequest : PBCodable <_INPBIntentExecutionRequest, NSSecureCoding, NSCopying> {
    struct { unsigned char encodingFormat : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAppIdentifier *appIdentifier;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (copy, nonatomic) NSString *encodedIntent;
@property (readonly, nonatomic) BOOL hasEncodedIntent;
@property (copy, nonatomic) NSString *encodedIntentDefinition;
@property (readonly, nonatomic) BOOL hasEncodedIntentDefinition;
@property (nonatomic) int encodingFormat;
@property (nonatomic) BOOL hasEncodingFormat;
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
- (int)StringAsEncodingFormat:(id)a0;
- (id)encodingFormatAsString:(int)a0;

@end
