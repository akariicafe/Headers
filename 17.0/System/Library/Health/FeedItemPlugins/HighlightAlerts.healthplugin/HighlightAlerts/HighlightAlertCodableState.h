@class NSString;

@interface HighlightAlertCodableState : PBCodable <NSCopying> {
    struct { unsigned char eventDate : 1; unsigned char expirationDate : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char acknowledged : 1; unsigned char dismissed : 1; } _has;
}

@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasEventUUID;
@property (retain, nonatomic) NSString *eventUUID;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) BOOL hasAcknowledged;
@property (nonatomic) BOOL acknowledged;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL dismissed;

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

@end
