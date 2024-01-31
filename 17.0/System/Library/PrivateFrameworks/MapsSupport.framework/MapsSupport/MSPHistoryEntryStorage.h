@class MSPDirectionsSearch, NSString, MSPRidesharingTrip, MSPPlaceDisplay, MSPTransitStorageLineItem, PBUnknownFields, MSPQuerySearch;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char position : 1; unsigned char timestamp : 1; unsigned char searchType : 1; unsigned char tracksRAPRecordingOnly : 1; } _has;
}

@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) double position;
@property (readonly, nonatomic) BOOL hasQuerySearch;
@property (retain, nonatomic) MSPQuerySearch *querySearch;
@property (readonly, nonatomic) BOOL hasDirectionsSearch;
@property (retain, nonatomic) MSPDirectionsSearch *directionsSearch;
@property (readonly, nonatomic) BOOL hasPlaceDisplay;
@property (retain, nonatomic) MSPPlaceDisplay *placeDisplay;
@property (readonly, nonatomic) BOOL hasTransitLineItem;
@property (retain, nonatomic) MSPTransitStorageLineItem *transitLineItem;
@property (readonly, nonatomic) BOOL hasRidesharingTrip;
@property (retain, nonatomic) MSPRidesharingTrip *ridesharingTrip;
@property (nonatomic) BOOL hasTracksRAPRecordingOnly;
@property (nonatomic) BOOL tracksRAPRecordingOnly;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSearchType:(id)a0;
- (id)searchTypeAsString:(int)a0;

@end
