@class NSString, HMAccessory;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *storeID;
@property (readonly, nonatomic) HMAccessory *accessory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessory:(id)a0;
- (id)initWithBundleID:(id)a0 storeID:(id)a1;

@end
