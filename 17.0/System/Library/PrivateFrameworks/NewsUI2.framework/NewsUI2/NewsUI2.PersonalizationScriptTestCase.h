@class NSString;

@interface NewsUI2.PersonalizationScriptTestCase : NSObject <SNTestCaseRun> {
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ aggregateStoreProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataStore;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ testName;
}

@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timeoutInSeconds;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ aggregate;

- (id)init;
- (void)runTestWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
