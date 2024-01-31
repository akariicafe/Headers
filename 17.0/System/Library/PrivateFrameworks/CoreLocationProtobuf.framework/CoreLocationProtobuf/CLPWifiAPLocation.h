@class NSString, CLPLocation;

@interface CLPWifiAPLocation : PBCodable <NSCopying> {
    struct { unsigned char scanTimestamp : 1; unsigned char hidden : 1; unsigned char scanType : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasScanTimestamp;
@property (nonatomic) double scanTimestamp;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) BOOL hasScanType;
@property (nonatomic) int scanType;

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
- (int)StringAsScanType:(id)a0;
- (id)scanTypeAsString:(int)a0;

@end
