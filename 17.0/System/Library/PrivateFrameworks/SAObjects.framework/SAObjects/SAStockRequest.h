@class NSString, NSDate;

@interface SAStockRequest : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSDate *startDate;

+ (id)request;
+ (id)requestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
