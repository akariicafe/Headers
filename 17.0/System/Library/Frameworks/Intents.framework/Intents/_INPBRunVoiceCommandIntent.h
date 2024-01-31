@class _INPBVoiceCommandDeviceInformation, NSString, _INPBDataString, _INPBIntentMetadata, _INPBIntentExecutionResult;

@interface _INPBRunVoiceCommandIntent : PBCodable <_INPBRunVoiceCommandIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentExecutionResult *executionResult;
@property (readonly, nonatomic) BOOL hasExecutionResult;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice;
@property (readonly, nonatomic) BOOL hasOriginDevice;
@property (copy, nonatomic) NSString *previousIntentIdentifier;
@property (readonly, nonatomic) BOOL hasPreviousIntentIdentifier;
@property (retain, nonatomic) _INPBDataString *voiceCommand;
@property (readonly, nonatomic) BOOL hasVoiceCommand;
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
