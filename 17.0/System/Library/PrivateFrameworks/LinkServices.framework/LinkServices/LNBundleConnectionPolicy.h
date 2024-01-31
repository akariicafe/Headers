@class NSString;

@interface LNBundleConnectionPolicy : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)connectionWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end
