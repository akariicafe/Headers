@class NSString, PBDataReader;

@interface GEOLPRVehicle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_licensePlate;
    NSString *_name;
    NSString *_powerTypeKey;
    NSString *_vehicleTypeKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_licensePlate : 1; unsigned char read_name : 1; unsigned char read_powerTypeKey : 1; unsigned char read_vehicleTypeKey : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPowerTypeKey;
@property (retain, nonatomic) NSString *powerTypeKey;
@property (readonly, nonatomic) BOOL hasVehicleTypeKey;
@property (retain, nonatomic) NSString *vehicleTypeKey;
@property (readonly, nonatomic) BOOL hasLicensePlate;
@property (retain, nonatomic) NSString *licensePlate;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
