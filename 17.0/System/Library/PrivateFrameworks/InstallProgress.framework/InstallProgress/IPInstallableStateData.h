@class LSApplicationIdentity;

@interface IPInstallableStateData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSApplicationIdentity *identity;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentity:(id)a0 isInstalling:(BOOL)a1;

@end
