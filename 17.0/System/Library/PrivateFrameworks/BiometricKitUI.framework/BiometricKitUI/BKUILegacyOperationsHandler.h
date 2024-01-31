@interface BKUILegacyOperationsHandler : BKUIFaceIDEnrollOperationsHandler

+ (id)handlersForEnrollmentConfiguration:(unsigned long long)a0 inBuddy:(BOOL)a1 delegate:(id)a2 credential:(id)a3 externalizedAuthContext:(id)a4;

- (void)enrollOperation:(id)a0 finishedWithEnrollResult:(id)a1;
- (void)advanceEnrollmentState;
- (void)startEnroll;

@end
