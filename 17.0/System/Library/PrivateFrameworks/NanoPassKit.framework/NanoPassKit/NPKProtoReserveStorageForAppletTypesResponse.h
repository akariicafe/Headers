@class NSData, NSMutableArray;

@interface NPKProtoReserveStorageForAppletTypesResponse : PBCodable <NSCopying> {
    struct { unsigned char isFull : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *reservationIDs;
@property (nonatomic) BOOL hasIsFull;
@property (nonatomic) BOOL isFull;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)reservationIDType;

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
- (void)addReservationID:(id)a0;
- (void)clearReservationIDs;
- (id)reservationIDAtIndex:(unsigned long long)a0;
- (unsigned long long)reservationIDsCount;

@end
