@class NSString;

@interface AWDITesterCertHomeKitTestStart : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasAccessoryManufacturer;
@property (retain, nonatomic) NSString *accessoryManufacturer;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasTestUUID;
@property (retain, nonatomic) NSString *testUUID;
@property (readonly, nonatomic) BOOL hasTestName;
@property (retain, nonatomic) NSString *testName;

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
