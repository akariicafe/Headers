@class NSString, AWDNWL2Report, AWDNWDeviceReport;

@interface AWDNWActivity : PBCodable <NSCopying> {
    struct { unsigned char activityDomain : 1; unsigned char activityLabel : 1; unsigned char investigationID : 1; unsigned char timestamp : 1; unsigned char isRetry : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActivityDomain;
@property (nonatomic) unsigned long long activityDomain;
@property (nonatomic) BOOL hasActivityLabel;
@property (nonatomic) unsigned long long activityLabel;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (readonly, nonatomic) BOOL hasParentActivityUUID;
@property (retain, nonatomic) NSString *parentActivityUUID;
@property (nonatomic) BOOL hasIsRetry;
@property (nonatomic) BOOL isRetry;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (retain, nonatomic) AWDNWL2Report *l2Report;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (retain, nonatomic) AWDNWDeviceReport *deviceReport;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasInvestigationID;
@property (nonatomic) unsigned long long investigationID;

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
