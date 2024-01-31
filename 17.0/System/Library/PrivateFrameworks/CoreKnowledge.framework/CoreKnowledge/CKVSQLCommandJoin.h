@class NSString, CKVSQLCommandJoinCriterion;

@interface CKVSQLCommandJoin : NSObject

@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) CKVSQLCommandJoinCriterion *joinCriterion;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 joinCriterion:(id)a1;

@end
