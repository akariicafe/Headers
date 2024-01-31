@class NSString, _INPBImageValue, _INPBContactValue;

@interface _INPBRideDriver : PBCodable <_INPBRideDriver, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBImageValue *image;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) _INPBContactValue *person;
@property (readonly, nonatomic) BOOL hasPerson;
@property (copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (copy, nonatomic) NSString *rating;
@property (readonly, nonatomic) BOOL hasRating;
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
