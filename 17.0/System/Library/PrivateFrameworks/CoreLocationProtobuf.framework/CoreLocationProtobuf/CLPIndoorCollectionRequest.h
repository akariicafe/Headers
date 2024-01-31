@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *indoorWifis;
@property (retain, nonatomic) NSMutableArray *indoorLocations;
@property (retain, nonatomic) NSMutableArray *indoorCMAttitudes;
@property (retain, nonatomic) NSMutableArray *indoorCMPedometers;
@property (retain, nonatomic) NSMutableArray *indoorMotionActivitys;
@property (retain, nonatomic) NSMutableArray *indoorPressures;
@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)indoorWifisType;
+ (Class)bundleIdType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorLocationsType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorPressureType;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)addIndoorWifis:(id)a0;
- (void)addBundleId:(id)a0;
- (void)addIndoorCMAttitude:(id)a0;
- (void)addIndoorCMPedometer:(id)a0;
- (void)addIndoorLocations:(id)a0;
- (void)addIndoorMotionActivity:(id)a0;
- (void)addIndoorPressure:(id)a0;
- (id)bundleIdAtIndex:(unsigned long long)a0;
- (void)clearIndoorCMAttitudes;
- (void)clearIndoorCMPedometers;
- (void)clearIndoorLocations;
- (void)clearIndoorMotionActivitys;
- (void)clearIndoorPressures;
- (void)clearIndoorWifis;
- (id)indoorCMAttitudeAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorCMAttitudesCount;
- (id)indoorCMPedometerAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorCMPedometersCount;
- (id)indoorLocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorLocationsCount;
- (id)indoorMotionActivityAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorMotionActivitysCount;
- (id)indoorPressureAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorPressuresCount;
- (id)indoorWifisAtIndex:(unsigned long long)a0;
- (unsigned long long)indoorWifisCount;

@end
