@class NSString;

@interface PLSqliteQueryPlanNode : NSObject

@property (readonly) int identifier;
@property (readonly) int parentIdentifier;
@property (readonly) int unused;
@property (readonly, copy) NSString *nodeDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(int)a0 parentIdentifier:(int)a1 unused:(int)a2 nodeDescription:(id)a3;

@end
