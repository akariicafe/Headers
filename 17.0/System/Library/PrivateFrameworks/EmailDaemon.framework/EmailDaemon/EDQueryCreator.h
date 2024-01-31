@class NSString;

@interface EDQueryCreator : NSObject

@property (readonly, nonatomic) NSString *queryType;

- (id)initWithQueryType:(id)a0;
- (id)queryWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;

@end
