@class NSString;

@interface _INPBDevice : PBCodable <_INPBDevice, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceCategory : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int deviceCategory;
@property (nonatomic) BOOL hasDeviceCategory;
@property (copy, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasDeviceName;
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
- (int)StringAsDeviceCategory:(id)a0;
- (id)deviceCategoryAsString:(int)a0;

@end
