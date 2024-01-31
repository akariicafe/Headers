@class NSString, NSSUsageSize;

@interface NSSUsageRespMsgAppBundle : PBCodable <NSCopying> {
    struct { unsigned char supportsManualPurge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL hasBundleVersion;
@property (retain, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (nonatomic) BOOL hasSupportsManualPurge;
@property (nonatomic) BOOL supportsManualPurge;
@property (readonly, nonatomic) BOOL hasSize;
@property (retain, nonatomic) NSSUsageSize *size;

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
