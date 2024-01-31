@class NSNumber;

@interface MTRProductIdentity : NSObject

@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;

- (id)initWithVendorID:(id)a0 productID:(id)a1;
- (void).cxx_destruct;

@end
