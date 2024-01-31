@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventEVTrip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_chargeLocationDetails;
    NSString *_metro;
    NSMutableArray *_realtimeDodgeballs;
    NSMutableArray *_stopAddedDetails;
    NSMutableArray *_stopRemovedDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _chargingStopAddedThroughSar;
    BOOL _originalTripIncludedChargingStation;
    BOOL _outOfCharge;
    BOOL _outOfRangeAlertDisplayed;
    BOOL _tripIncludedPreferredChargingStation;
    struct { unsigned char has_chargingStopAddedThroughSar : 1; unsigned char has_originalTripIncludedChargingStation : 1; unsigned char has_outOfCharge : 1; unsigned char has_outOfRangeAlertDisplayed : 1; unsigned char has_tripIncludedPreferredChargingStation : 1; unsigned char read_chargeLocationDetails : 1; unsigned char read_metro : 1; unsigned char read_realtimeDodgeballs : 1; unsigned char read_stopAddedDetails : 1; unsigned char read_stopRemovedDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOutOfCharge;
@property (nonatomic) BOOL outOfCharge;
@property (nonatomic) BOOL hasOutOfRangeAlertDisplayed;
@property (nonatomic) BOOL outOfRangeAlertDisplayed;
@property (retain, nonatomic) NSMutableArray *chargeLocationDetails;
@property (retain, nonatomic) NSMutableArray *stopAddedDetails;
@property (readonly, nonatomic) BOOL hasMetro;
@property (retain, nonatomic) NSString *metro;
@property (nonatomic) BOOL hasOriginalTripIncludedChargingStation;
@property (nonatomic) BOOL originalTripIncludedChargingStation;
@property (nonatomic) BOOL hasChargingStopAddedThroughSar;
@property (nonatomic) BOOL chargingStopAddedThroughSar;
@property (nonatomic) BOOL hasTripIncludedPreferredChargingStation;
@property (nonatomic) BOOL tripIncludedPreferredChargingStation;
@property (retain, nonatomic) NSMutableArray *stopRemovedDetails;
@property (retain, nonatomic) NSMutableArray *realtimeDodgeballs;

+ (BOOL)isValid:(id)a0;
+ (Class)chargeLocationDetailsType;
+ (Class)realtimeDodgeballType;
+ (Class)stopAddedDetailsType;
+ (Class)stopRemovedDetailsType;

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
- (void)addChargeLocationDetails:(id)a0;
- (void)addRealtimeDodgeball:(id)a0;
- (void)addStopAddedDetails:(id)a0;
- (void)addStopRemovedDetails:(id)a0;
- (id)chargeLocationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)chargeLocationDetailsCount;
- (void)clearChargeLocationDetails;
- (void)clearRealtimeDodgeballs;
- (void)clearStopAddedDetails;
- (void)clearStopRemovedDetails;
- (id)realtimeDodgeballAtIndex:(unsigned long long)a0;
- (unsigned long long)realtimeDodgeballsCount;
- (id)stopAddedDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)stopAddedDetailsCount;
- (id)stopRemovedDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)stopRemovedDetailsCount;

@end
