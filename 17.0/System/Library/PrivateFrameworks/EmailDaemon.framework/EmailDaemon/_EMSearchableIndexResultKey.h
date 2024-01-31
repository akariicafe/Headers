@class NSIndexSet;
@protocol EDSearchableCriterion;

@interface _EMSearchableIndexResultKey : NSObject

@property (retain, nonatomic) id<EDSearchableCriterion> criterion;
@property (copy, nonatomic) NSIndexSet *mailboxIDs;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
