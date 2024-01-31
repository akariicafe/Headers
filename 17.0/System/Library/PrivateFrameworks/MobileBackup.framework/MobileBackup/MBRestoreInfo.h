@class NSString, NSDate;

@interface MBRestoreInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *date;
@property (readonly) BOOL wasCloudRestore;
@property (readonly) NSString *deviceBuildVersion;
@property (readonly) NSString *backupBuildVersion;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setDate:(id)a0;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackupBuildVersion:(id)a0;
- (void)setDeviceBuildVersion:(id)a0;
- (void)setWasCloudRestore:(BOOL)a0;

@end
