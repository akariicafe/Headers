@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (id)init;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;

@end
