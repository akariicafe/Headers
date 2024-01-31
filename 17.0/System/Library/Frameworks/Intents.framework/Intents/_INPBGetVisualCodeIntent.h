@class NSString, _INPBIntentMetadata;

@interface _INPBGetVisualCodeIntent : PBCodable <_INPBGetVisualCodeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char visualCodeType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int visualCodeType;
@property (nonatomic) BOOL hasVisualCodeType;
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
- (int)StringAsVisualCodeType:(id)a0;
- (id)visualCodeTypeAsString:(int)a0;

@end
