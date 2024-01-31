@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *bundleIDs;
@property BOOL success;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIDs:(id)a0;

@end
