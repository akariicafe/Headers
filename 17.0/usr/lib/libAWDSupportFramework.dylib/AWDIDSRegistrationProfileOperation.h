@class NSString;

@interface AWDIDSRegistrationProfileOperation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char genericError : 1; unsigned char pOSIXError : 1; unsigned char registrationError : 1; unsigned char resultCode : 1; unsigned char success : 1; unsigned char uRLError : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) unsigned int resultCode;
@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) unsigned int registrationError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) BOOL hasURLError;
@property (nonatomic) int uRLError;
@property (nonatomic) BOOL hasPOSIXError;
@property (nonatomic) int pOSIXError;

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
