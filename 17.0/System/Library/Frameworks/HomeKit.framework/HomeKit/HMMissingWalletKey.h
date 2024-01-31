@class HMUser, NSString, NSArray, HMAccessory;

@interface HMMissingWalletKey : NSObject <HMFObject, NSCopying>

@property (readonly) HMAccessory *accessory;
@property (readonly) HMUser *user;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)missingWalletKeyWithValue:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessory:(id)a0 user:(id)a1;

@end
