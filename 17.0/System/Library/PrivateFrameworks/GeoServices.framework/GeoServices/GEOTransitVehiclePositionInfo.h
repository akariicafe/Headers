@class NSArray, NSString, NSMutableArray, PBUnknownFields;

@interface GEOTransitVehiclePositionInfo : PBCodable <GEOTransitVehicleEntries, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_departureEntrys;
}

@property (readonly, nonatomic) unsigned long long firstTripID;
@property (readonly, nonatomic) unsigned long long tripIDForNextUpcomingDeparture;
@property (readonly, copy, nonatomic) NSArray *tripIDs;
@property (readonly, copy, nonatomic) NSArray *upcomingTripIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *departureEntrys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)departureEntryType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addDepartureEntry:(id)a0;
- (void)clearDepartureEntrys;
- (id)departureEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)departureEntrysCount;

@end
