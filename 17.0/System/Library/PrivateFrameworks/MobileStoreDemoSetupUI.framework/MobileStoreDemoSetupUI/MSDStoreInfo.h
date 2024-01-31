@class NSString, CLLocation;

@interface MSDStoreInfo : NSObject

@property (readonly, nonatomic) BOOL isHQ;
@property (readonly, nonatomic) BOOL confirmStoreSelection;
@property (readonly, nonatomic) NSString *confirmationCode;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSString *companyName;
@property (readonly, nonatomic) NSString *fullAddress;
@property (readonly, nonatomic) CLLocation *storeLocation;
@property (readonly, nonatomic) NSString *storeDescription;
@property (readonly, nonatomic) BOOL isNearby;

- (id)initWithDict:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_buildFullAddress:(id)a0;
- (id)_buildStoreDescription:(id)a0;
- (id)_localizedCapitalizedTrimmedString:(id)a0;

@end
