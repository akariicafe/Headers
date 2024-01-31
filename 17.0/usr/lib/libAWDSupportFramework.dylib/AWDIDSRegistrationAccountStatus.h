@class NSString;

@interface AWDIDSRegistrationAccountStatus : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char accountType : 1; unsigned char doesExist : 1; unsigned char isEnabled : 1; unsigned char isUserDisabled : 1; unsigned char isiCloudSignedIn : 1; unsigned char isiTunesSignedIn : 1; unsigned char registrationError : 1; unsigned char registrationErrorReason : 1; unsigned char registrationStatus : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAccountType;
@property (nonatomic) int accountType;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasDoesExist;
@property (nonatomic) unsigned int doesExist;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) unsigned int isEnabled;
@property (nonatomic) BOOL hasIsUserDisabled;
@property (nonatomic) unsigned int isUserDisabled;
@property (nonatomic) BOOL hasIsiCloudSignedIn;
@property (nonatomic) unsigned int isiCloudSignedIn;
@property (nonatomic) BOOL hasRegistrationStatus;
@property (nonatomic) int registrationStatus;
@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) BOOL hasRegistrationErrorReason;
@property (nonatomic) int registrationErrorReason;
@property (nonatomic) BOOL hasIsiTunesSignedIn;
@property (nonatomic) unsigned int isiTunesSignedIn;

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
