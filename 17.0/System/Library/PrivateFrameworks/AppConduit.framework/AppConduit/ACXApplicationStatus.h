@class NSError, NSString;

@interface ACXApplicationStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installStatus;
@property (retain, nonatomic) NSError *lastInstallationError;
@property (copy, nonatomic) NSString *uniqueInstallID;
@property (nonatomic) long long watchKitCompatibility;
@property (nonatomic) unsigned long long architectureCompatibility;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInstallStatusWithGizmoStatus:(unsigned long long)a0;

@end
