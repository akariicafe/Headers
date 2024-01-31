@class NSString, CKRecord, NSArray;

@interface UARPiCloudAccessoryRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *recordName;
@property (readonly) NSString *recordStatus;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *firmwareURL;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *updateClassification;
@property (readonly) NSString *deploymentStr;
@property (readonly) NSArray *deploymentList;
@property (readonly) NSString *releaseNotesURL;
@property (readonly) NSString *firmwareBinaryHash;
@property (readonly) NSString *releaseNotesHash;
@property (readonly) NSString *signature;
@property (readonly) NSString *releaseDate;
@property (readonly) NSString *releaseNotesFileSize;
@property (readonly) NSString *firmwareFileSize;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCKRecord:(id)a0;

@end
