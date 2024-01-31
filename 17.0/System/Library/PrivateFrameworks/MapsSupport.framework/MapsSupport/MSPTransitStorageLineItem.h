@class MSPTransitStorageAttribution, NSString, NSArray, GEOMapItemIdentifier, PBUnknownFields, NSMutableArray, MSPTransitStorageLine, GEOMapRegion;
@protocol GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitSystem;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) id<GEOTransitAttribution> attribution;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) BOOL isIncidentsTTLExpired;
@property (readonly, nonatomic) BOOL hasIncidentComponent;
@property (readonly, nonatomic) BOOL hasEncyclopedicInfo;
@property (readonly, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> alternateArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> headerArtwork;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasLine;
@property (retain, nonatomic) MSPTransitStorageLine *line;
@property (readonly, nonatomic) BOOL hasStoredMapRegion;
@property (retain, nonatomic) GEOMapRegion *storedMapRegion;
@property (readonly, nonatomic) BOOL hasTransitAttribution;
@property (retain, nonatomic) MSPTransitStorageAttribution *transitAttribution;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)incidentsType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIncidents:(id)a0;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentsCount;
- (id)initWithLineItem:(id)a0;

@end
