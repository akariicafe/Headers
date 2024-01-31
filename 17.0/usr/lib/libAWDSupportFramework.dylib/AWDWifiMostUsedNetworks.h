@class NSData, NSString;

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    struct { unsigned char timeUsed : 1; unsigned char apOUI : 1; unsigned char networkScore : 1; unsigned char networkScoreBitMap : 1; unsigned char securityType : 1; unsigned char switchToCount : 1; unsigned char switchedAwayFromCount : 1; unsigned char timeUsedMinutes : 1; } _has;
}

@property (nonatomic) BOOL hasApOUI;
@property (nonatomic) unsigned int apOUI;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasTimeUsed;
@property (nonatomic) double timeUsed;
@property (readonly, nonatomic) BOOL hasApOui;
@property (retain, nonatomic) NSData *apOui;
@property (nonatomic) BOOL hasTimeUsedMinutes;
@property (nonatomic) unsigned int timeUsedMinutes;
@property (nonatomic) BOOL hasNetworkScoreBitMap;
@property (nonatomic) unsigned int networkScoreBitMap;
@property (nonatomic) BOOL hasSwitchedAwayFromCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) BOOL hasSwitchToCount;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) BOOL hasNetworkScore;
@property (nonatomic) int networkScore;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

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

@end
