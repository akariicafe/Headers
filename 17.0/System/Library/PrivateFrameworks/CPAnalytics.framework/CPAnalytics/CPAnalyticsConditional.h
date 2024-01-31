@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSPredicate *predicate;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)_validateAndParseConfig:(id)a0 forKey:(id)a1;

@end
