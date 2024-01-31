@class NSString;

@interface AWDITesterCertTestStart : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasTestName;
@property (retain, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasAccessoryType;
@property (retain, nonatomic) NSString *accessoryType;

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
