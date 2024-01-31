@class NSString, NSArray;

@interface _ICContact : NSObject

@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) NSString *jobTitle;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSArray *relations;
@property (readonly, nonatomic) NSArray *streets;
@property (readonly, nonatomic) NSArray *cities;
@property (readonly, nonatomic) double score;

- (unsigned long long)hash;
- (BOOL)isEqualToContact:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)flatten;
- (id)initWithFirstName:(id)a0 phoneticFirstName:(id)a1 middleName:(id)a2 phoneticMiddleName:(id)a3 lastName:(id)a4 phoneticLastName:(id)a5 organizationName:(id)a6 jobTitle:(id)a7 nickname:(id)a8 relations:(id)a9 streets:(id)a10 cities:(id)a11 score:(double)a12;

@end
