@class NSMutableDictionary;

@interface AutocorrectionTesterAppDelegate : NSObject {
    NSMutableDictionary *_options;
}

+ (void)setupSingletonMocksWithOptions:(id)a0;
+ (id)reporterWithOptions:(id)a0;
+ (void)teardownSingletonMocks;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)resetOptions:(id)a0;
- (BOOL)runWithObserver:(id /* block */)a0;
- (id)initWithLocale:(id)a0 andText:(id)a1;
- (BOOL)runAndWriteReport;
- (BOOL)runAutocorrectionTester:(id /* block */)a0;
- (double)runDslTest:(id)a0 withHarnessClass:(Class)a1 forLanguage:(id)a2 errorMessage:(id)a3;
- (BOOL)runTestCasesForSource:(id)a0 errorMessage:(id)a1 reportObserver:(id /* block */)a2;
- (BOOL)runTests:(id)a0 withHarnessClass:(Class)a1 forLanguage:(id)a2 errorMessage:(id)a3 reportObserver:(id /* block */)a4;

@end
