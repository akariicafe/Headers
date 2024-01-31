@class NSString, NSMutableArray, NSArray;

@interface CalDAVPrincipalResult : NSObject

@property (retain, nonatomic) NSMutableArray *mCUAddresses;
@property (retain, nonatomic) NSMutableArray *mEmailAddresses;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *resultType;
@property (retain, nonatomic) NSString *principalPath;
@property (readonly, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *cuAddresses;
@property (readonly, nonatomic) NSString *preferredCUAddress;

+ (id)resultFromResponse:(id)a0;

- (id)initWithResponse:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addCUAddress:(id)a0;
- (void)addEmail:(id)a0;
- (id)convertToDAContactSearchResultElement;

@end
