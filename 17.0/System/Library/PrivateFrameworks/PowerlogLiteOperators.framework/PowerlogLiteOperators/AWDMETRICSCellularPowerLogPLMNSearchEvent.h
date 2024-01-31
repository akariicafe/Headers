@interface AWDMETRICSCellularPowerLogPLMNSearchEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char networkSelectionMode : 1; unsigned char rat : 1; unsigned char searchType : 1; unsigned char state : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) BOOL hasNetworkSelectionMode;
@property (nonatomic) int networkSelectionMode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)stateAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSearchType:(id)a0;
- (id)searchTypeAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (int)StringAsRat:(id)a0;
- (int)StringAsNetworkSelectionMode:(id)a0;
- (id)networkSelectionModeAsString:(int)a0;
- (id)ratAsString:(int)a0;

@end
