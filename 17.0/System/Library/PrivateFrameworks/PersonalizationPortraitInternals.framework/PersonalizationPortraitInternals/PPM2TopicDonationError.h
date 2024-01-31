@class NSString;

@interface PPM2TopicDonationError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; unsigned char reason : 1; unsigned char source : 1; } _has;
}

@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) long long code;

- (id)reasonAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (int)StringAsReason:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
