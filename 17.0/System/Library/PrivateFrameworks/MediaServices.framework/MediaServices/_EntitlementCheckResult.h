@class NSError, NSString;

@interface _EntitlementCheckResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *entitlement;
@property (nonatomic, getter=isEntitled) BOOL entitled;

- (id)initWithEntitlement:(id)a0 group:(id)a1;
- (void).cxx_destruct;

@end
