@class NSString, _INPBContact;

@interface _INPBShareDestination : PBCodable <_INPBShareDestination, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBContact *contact;
@property (readonly, nonatomic) BOOL hasContact;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)StringAsDeviceType:(id)a0;
- (id)deviceTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
