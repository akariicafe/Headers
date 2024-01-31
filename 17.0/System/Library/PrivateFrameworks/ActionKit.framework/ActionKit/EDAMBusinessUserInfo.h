@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *updated;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
