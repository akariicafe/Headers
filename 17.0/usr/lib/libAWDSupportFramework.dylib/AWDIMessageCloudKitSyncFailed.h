@class NSString;

@interface AWDIMessageCloudKitSyncFailed : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char linkQuality : 1; unsigned char nestedErrorCode : 1; unsigned char topLevelErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSyncType;
@property (retain, nonatomic) NSString *syncType;
@property (readonly, nonatomic) BOOL hasTopLevelErrorDomain;
@property (retain, nonatomic) NSString *topLevelErrorDomain;
@property (nonatomic) BOOL hasTopLevelErrorCode;
@property (nonatomic) int topLevelErrorCode;
@property (readonly, nonatomic) BOOL hasNestedErrorDomain;
@property (retain, nonatomic) NSString *nestedErrorDomain;
@property (nonatomic) BOOL hasNestedErrorCode;
@property (nonatomic) int nestedErrorCode;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;

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
