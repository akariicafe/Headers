@class NSString, NSMutableArray;

@interface AWDWiFiMetricsManagerBlacklistedNetworkInfo : PBCodable <NSCopying> {
    struct { unsigned char networkFlags : 1; unsigned char reserverdInfo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSsidHash;
@property (retain, nonatomic) NSString *ssidHash;
@property (nonatomic) BOOL hasNetworkFlags;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic) BOOL hasReserverdInfo;
@property (nonatomic) unsigned int reserverdInfo;
@property (retain, nonatomic) NSMutableArray *blacklistingRecords;

+ (Class)blacklistingRecordType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addBlacklistingRecord:(id)a0;
- (id)blacklistingRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistingRecordsCount;
- (void)clearBlacklistingRecords;

@end
