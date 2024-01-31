@class NSNumber, NSString;

@interface HMMTRMutableVendorMetadataVendor : HMMTRVendorMetadataVendor

@property (copy) NSNumber *identifier;
@property (copy) NSString *name;
@property (copy) NSString *appStoreID;
@property (copy) NSString *appBundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addProduct:(id)a0;
- (void)removeProductWithID:(id)a0;

@end
