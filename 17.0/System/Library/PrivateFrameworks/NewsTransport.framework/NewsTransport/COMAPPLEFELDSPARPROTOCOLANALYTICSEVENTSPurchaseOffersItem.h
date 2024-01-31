@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSPurchaseOffersItem : PBCodable <NSCopying> {
    struct { unsigned char purchaseType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) BOOL hasPurchaseType;
@property (nonatomic) int purchaseType;

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
- (int)StringAsPurchaseType:(id)a0;
- (id)purchaseTypeAsString:(int)a0;

@end
