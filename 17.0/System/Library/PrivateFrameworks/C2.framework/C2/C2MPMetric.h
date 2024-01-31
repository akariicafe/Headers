@class C2MPDeviceInfo, NSString, C2MPServerInfo, C2MPNetworkEvent, C2MPGenericEvent, C2MPCloudKitInfo;

@interface C2MPMetric : PBCodable <NSCopying> {
    struct { unsigned char reportFrequency : 1; unsigned char reportFrequencyBase : 1; unsigned char triggers : 1; unsigned char metricType : 1; unsigned char reportTransportAllowExpensiveAccess : 1; unsigned char reportTransportAllowPowerNapScheduling : 1; } _has;
}

@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) int metricType;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (retain, nonatomic) C2MPDeviceInfo *deviceInfo;
@property (readonly, nonatomic) BOOL hasCloudkitInfo;
@property (retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo;
@property (readonly, nonatomic) BOOL hasServerInfo;
@property (retain, nonatomic) C2MPServerInfo *serverInfo;
@property (nonatomic) BOOL hasTriggers;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic) BOOL hasReportFrequency;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) BOOL hasReportFrequencyBase;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) BOOL hasReportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL reportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL hasReportTransportAllowPowerNapScheduling;
@property (nonatomic) BOOL reportTransportAllowPowerNapScheduling;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL hasNetworkEvent;
@property (retain, nonatomic) C2MPNetworkEvent *networkEvent;
@property (readonly, nonatomic) BOOL hasGenericEvent;
@property (retain, nonatomic) C2MPGenericEvent *genericEvent;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)metricTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsMetricType:(id)a0;

@end
