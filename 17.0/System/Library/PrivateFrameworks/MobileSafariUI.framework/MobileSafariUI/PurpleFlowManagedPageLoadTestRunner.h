@interface PurpleFlowManagedPageLoadTestRunner : PurplePageLoadTestRunner {
    int _notifyToken;
}

- (void)dealloc;
- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (void)startNextPage;

@end
