@class NSString, AMSProcessInfo;

@interface AMSFDSOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long action;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
