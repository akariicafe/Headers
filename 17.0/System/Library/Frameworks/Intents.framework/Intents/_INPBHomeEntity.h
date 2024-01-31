@class NSString, NSArray, _INPBDataString, _INPBString;

@interface _INPBHomeEntity : PBCodable <_INPBHomeEntity, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _deviceTypes;
    struct { unsigned char deviceType : 1; unsigned char entityType : 1; unsigned char sceneType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) int *deviceTypes;
@property (readonly, nonatomic) unsigned long long deviceTypesCount;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) _INPBDataString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (retain, nonatomic) _INPBDataString *group;
@property (readonly, nonatomic) BOOL hasGroup;
@property (retain, nonatomic) _INPBDataString *home;
@property (readonly, nonatomic) BOOL hasHome;
@property (retain, nonatomic) _INPBString *name;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) _INPBDataString *room;
@property (readonly, nonatomic) BOOL hasRoom;
@property (nonatomic) int sceneType;
@property (nonatomic) BOOL hasSceneType;
@property (retain, nonatomic) _INPBDataString *zone;
@property (readonly, nonatomic) BOOL hasZone;
@property (copy, nonatomic) NSArray *zones;
@property (readonly, nonatomic) unsigned long long zonesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)zonesType;

- (void)dealloc;
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
- (int)StringAsDeviceTypes:(id)a0;
- (int)StringAsEntityType:(id)a0;
- (void)addDeviceTypes:(int)a0;
- (int)StringAsSceneType:(id)a0;
- (void)addZones:(id)a0;
- (void)clearDeviceTypes;
- (void)clearZones;
- (id)deviceTypesAsString:(int)a0;
- (int)deviceTypesAtIndex:(unsigned long long)a0;
- (id)entityTypeAsString:(int)a0;
- (id)sceneTypeAsString:(int)a0;
- (void)setDeviceTypes:(int *)a0 count:(unsigned long long)a1;
- (id)zonesAtIndex:(unsigned long long)a0;

@end
