@class NSString, NSMutableArray, NSData;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {
    struct { unsigned char isPassInLibrary : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *shareableCredentials;
@property (readonly, nonatomic) BOOL hasMessageCaption;
@property (retain, nonatomic) NSString *messageCaption;
@property (readonly, nonatomic) BOOL hasDataString;
@property (retain, nonatomic) NSString *dataString;
@property (readonly, nonatomic) BOOL hasPolicyIdentifier;
@property (retain, nonatomic) NSString *policyIdentifier;
@property (readonly, nonatomic) BOOL hasPassThumbnailImage;
@property (retain, nonatomic) NSData *passThumbnailImage;
@property (nonatomic) BOOL hasIsPassInLibrary;
@property (nonatomic) BOOL isPassInLibrary;

+ (Class)shareableCredentialsType;

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
- (void)addShareableCredentials:(id)a0;
- (void)clearShareableCredentials;
- (id)shareableCredentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareableCredentialsCount;

@end
