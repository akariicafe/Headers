@class NSData, NSNumber;

@interface CTEOSFirmwareInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *currentVersion;
@property (retain, nonatomic) NSNumber *userProfiles;
@property (retain, nonatomic) NSData *updateCsn;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
