@class NSString;

@interface HFServiceAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *subtype;

+ (id)na_identity;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithServiceType:(id)a0 subtype:(id)a1;

@end
