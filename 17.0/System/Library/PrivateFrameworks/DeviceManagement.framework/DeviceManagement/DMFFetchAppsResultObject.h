@class NSDictionary;

@interface DMFFetchAppsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *appsByBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAppsByBundleIdentifier:(id)a0;

@end
