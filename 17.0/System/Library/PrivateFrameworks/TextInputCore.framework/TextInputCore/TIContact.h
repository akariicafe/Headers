@class NSString, NSArray;

@interface TIContact : NSObject

@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *phoneticFamilyName;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *phoneticGivenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *jobTitle;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSArray *relations;
@property (retain, nonatomic) NSArray *cities;
@property (nonatomic) BOOL hasRelevancyScore;
@property (nonatomic) float relevancyScore;

- (void).cxx_destruct;
- (id)flatten;

@end
