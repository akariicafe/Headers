@class NSString, NSMutableArray, PBDataReader;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _additionalPlaceTypes;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSString *_displayRegion;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_additionalPlaceTypes : 1; unsigned char read_deviceCountryCode : 1; unsigned char read_deviceSku : 1; unsigned char read_displayRegion : 1; unsigned char read_locations : 1; unsigned char read_serviceTags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property (readonly, nonatomic) int *additionalPlaceTypes;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;
@property (retain, nonatomic) NSMutableArray *serviceTags;

+ (Class)locationType;
+ (BOOL)isValid:(id)a0;
+ (Class)serviceTagType;

- (void)clearLocations;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)addLocation:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearServiceTags;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)serviceTagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addServiceTag:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsAdditionalPlaceTypes:(id)a0;
- (void)addAdditionalPlaceType:(int)a0;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)a0;
- (id)additionalPlaceTypesAsString:(int)a0;
- (void)clearAdditionalPlaceTypes;
- (id)locationAtIndex:(unsigned long long)a0;
- (unsigned long long)locationsCount;
- (void)setAdditionalPlaceTypes:(int *)a0 count:(unsigned long long)a1;

@end
