@class NSString;

@interface _EMCompoundQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)operandFromPredicate:(id)a0;
- (id)queryExpressionFromPredicate:(id)a0 propertyMapper:(id)a1 languages:(id)a2;

@end
