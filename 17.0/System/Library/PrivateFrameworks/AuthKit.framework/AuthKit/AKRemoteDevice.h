@class NSString, NSDictionary, NSDate;

@interface AKRemoteDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *operatingSystemName;
@property (copy, nonatomic) NSString *operatingSystemVersion;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *services;
@property (copy, nonatomic) NSString *colorCode;
@property (copy, nonatomic) NSString *enclosureColorCode;
@property (copy, nonatomic) NSString *coverGlassColorCode;
@property (copy, nonatomic) NSString *housingColorCode;
@property (copy, nonatomic) NSString *backingColorCode;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL inCircle;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *lastCacheUpdatedDate;
@property (copy, nonatomic) NSString *machineId;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic) NSDictionary *additionalInfo;

- (void)encodeWithCoder:(id)a0;
- (void)_initWithInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
