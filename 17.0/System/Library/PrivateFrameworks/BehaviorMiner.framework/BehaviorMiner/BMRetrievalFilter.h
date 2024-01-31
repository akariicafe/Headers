@class NSSet;

@interface BMRetrievalFilter : NSObject

@property (nonatomic) long long operand;
@property (nonatomic) long long inclusionOperator;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) NSSet *types;

+ (id)filterWithOperand:(long long)a0 inclusionOperator:(long long)a1 items:(id)a2;
+ (id)filterWithOperand:(long long)a0 inclusionOperator:(long long)a1 types:(id)a2;

- (void).cxx_destruct;
- (id)rulePredicate;

@end
