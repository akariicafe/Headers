@class NSString;
@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly, copy, nonatomic) id<XBSnapshotManifestStore> store;

+ (id)identityWithBundleIdentifier:(id)a0 store:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 store:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
