@class CLPMeta, CLPContext, CLPLocation, NSMutableArray;

@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char stopTimestamp : 1; unsigned char collectionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) BOOL hasStopTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) int collectionType;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) CLPContext *context;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (retain, nonatomic) NSMutableArray *pressures;
@property (retain, nonatomic) NSMutableArray *wifiScans;
@property (retain, nonatomic) NSMutableArray *locations;

+ (Class)locationsType;
+ (Class)pressureType;
+ (Class)wifiScanType;

- (void)clearLocations;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addLocations:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (int)StringAsCollectionType:(id)a0;
- (void)addPressure:(id)a0;
- (void)addWifiScan:(id)a0;
- (void)clearPressures;
- (void)clearWifiScans;
- (id)collectionTypeAsString:(int)a0;
- (id)pressureAtIndex:(unsigned long long)a0;
- (unsigned long long)pressuresCount;
- (id)wifiScanAtIndex:(unsigned long long)a0;
- (unsigned long long)wifiScansCount;

@end
