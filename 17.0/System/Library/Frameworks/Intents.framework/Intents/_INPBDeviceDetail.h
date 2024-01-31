@class _INPBDataString, _INPBContact, NSString;

@interface _INPBDeviceDetail : PBCodable <_INPBDeviceDetail, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceClass : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *category;
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (retain, nonatomic) _INPBDataString *deviceName;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) _INPBContact *deviceOwner;
@property (readonly, nonatomic) BOOL hasDeviceOwner;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBDataString *productName;
@property (readonly, nonatomic) BOOL hasProductName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)StringAsDeviceClass:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)deviceClassAsString:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
