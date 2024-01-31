@class NSArray, NSString;

@interface EFSQLAndExpression : NSObject <EFSQLCompoundExpression>

@property (readonly, copy, nonatomic) NSArray *expressions;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)combined:(id)a0;

@end
