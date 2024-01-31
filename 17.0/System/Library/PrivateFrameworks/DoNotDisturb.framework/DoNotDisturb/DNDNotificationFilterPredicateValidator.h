@class NSString;

@interface DNDNotificationFilterPredicateValidator : NSObject <NSPredicateVisitor> {
    NSString *_compileTimeIssues;
}

- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void).cxx_destruct;
- (BOOL)validatePredicate:(id)a0 compileTimeIssues:(id *)a1 runTimeIssues:(id *)a2;
- (void)visitPredicateOperator:(id)a0;

@end
