@class NSString, NSDictionary, NSMutableArray;

@interface TTKFileSink : NSObject <TTKTestCaseSink> {
    NSString *_fileName;
    NSString *_inputMode;
    NSDictionary *_layouts;
    NSMutableArray *_testCases;
    int _testCaseIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)flush;
- (void).cxx_destruct;
- (id)generateLayouts;
- (void)addLayouts:(id)a0;
- (id)generateData;
- (id)generateTestCases;
- (id)init:(id)a0 inputMode:(id)a1 layouts:(id)a2;
- (void)pushNextTestCase:(id)a0;

@end
