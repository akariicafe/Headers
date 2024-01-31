@class NSString, NSData;

@interface HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor : PBCodable <NSCopying> {
    struct { unsigned char downloadSize : 1; unsigned char errorCode : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char status : 1; unsigned char updateVersion : 1; unsigned char rampEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long status;
@property (readonly, nonatomic) BOOL hasServerAssetURL;
@property (retain, nonatomic) NSString *serverAssetURL;
@property (readonly, nonatomic) BOOL hasServerAssetAlgorithm;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (readonly, nonatomic) BOOL hasServerAssetMeasurement;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) BOOL hasUpdateVersion;
@property (nonatomic) long long updateVersion;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (nonatomic) BOOL hasDownloadSize;
@property (nonatomic) long long downloadSize;
@property (readonly, nonatomic) BOOL hasHumanReadableUpdateName;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) BOOL hasRampEnabled;
@property (nonatomic) BOOL rampEnabled;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;

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
