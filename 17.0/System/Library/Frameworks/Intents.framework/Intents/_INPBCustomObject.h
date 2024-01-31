@class NSArray, _INPBImageValue, NSString;

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternatives;
@property (readonly, nonatomic) unsigned long long alternativesCount;
@property (retain, nonatomic) _INPBImageValue *displayImage;
@property (readonly, nonatomic) BOOL hasDisplayImage;
@property (copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (readonly, nonatomic) BOOL hasPronunciationHint;
@property (copy, nonatomic) NSString *subtitleString;
@property (readonly, nonatomic) BOOL hasSubtitleString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alternativeType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)alternativeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addAlternative:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAlternatives;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
