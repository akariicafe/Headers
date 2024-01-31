@class NSString;

@interface RERecentAction : NSObject <NSCopying>

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long actionIdentifier;

+ (id)actionWithBundleIdentifier:(id)a0 actionIdentifier:(unsigned long long)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
