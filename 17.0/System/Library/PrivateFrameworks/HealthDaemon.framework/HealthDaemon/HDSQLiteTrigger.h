@class NSString;

@interface HDSQLiteTrigger : NSObject

@property (readonly, nonatomic) Class entityClass;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long event;
@property (readonly, copy, nonatomic) NSString *predicateString;
@property (readonly, copy, nonatomic) NSString *triggerString;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)disambiguatedName;
- (id)initWithEntity:(Class)a0 name:(id)a1 triggerEvent:(long long)a2 predicateString:(id)a3 triggerString:(id)a4;
- (id)creationSQL;

@end
