@class _INPBDataString, NSArray, NSString;

@interface _INPBHomeFilter : PBCodable <_INPBHomeFilter, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceType : 1; unsigned char entityType : 1; unsigned char hasAllQuantifier : 1; unsigned char isExcludeFilter : 1; unsigned char outerDeviceType : 1; unsigned char serviceType : 1; unsigned char subServiceType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accessory;
@property (readonly, nonatomic) BOOL hasAccessory;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSArray *entityIdentifiers;
@property (readonly, nonatomic) unsigned long long entityIdentifiersCount;
@property (retain, nonatomic) _INPBDataString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (retain, nonatomic) _INPBDataString *group;
@property (readonly, nonatomic) BOOL hasGroup;
@property (nonatomic) BOOL hasAllQuantifier;
@property (nonatomic) BOOL hasHasAllQuantifier;
@property (retain, nonatomic) _INPBDataString *home;
@property (readonly, nonatomic) BOOL hasHome;
@property (nonatomic) BOOL isExcludeFilter;
@property (nonatomic) BOOL hasIsExcludeFilter;
@property (retain, nonatomic) _INPBDataString *outerDeviceName;
@property (readonly, nonatomic) BOOL hasOuterDeviceName;
@property (nonatomic) int outerDeviceType;
@property (nonatomic) BOOL hasOuterDeviceType;
@property (retain, nonatomic) _INPBDataString *room;
@property (readonly, nonatomic) BOOL hasRoom;
@property (retain, nonatomic) _INPBDataString *scene;
@property (readonly, nonatomic) BOOL hasScene;
@property (retain, nonatomic) _INPBDataString *service;
@property (readonly, nonatomic) BOOL hasService;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int subServiceType;
@property (nonatomic) BOOL hasSubServiceType;
@property (retain, nonatomic) _INPBDataString *zone;
@property (readonly, nonatomic) BOOL hasZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)StringAsDeviceType:(id)a0;
- (id)deviceTypeAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)serviceTypeAsString:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEntityType:(id)a0;
- (int)StringAsSubServiceType:(id)a0;
- (int)StringAsOuterDeviceType:(id)a0;
- (void)addEntityIdentifiers:(id)a0;
- (void)clearEntityIdentifiers;
- (id)entityIdentifiersAtIndex:(unsigned long long)a0;
- (id)entityTypeAsString:(int)a0;
- (id)outerDeviceTypeAsString:(int)a0;
- (id)subServiceTypeAsString:(int)a0;

@end
