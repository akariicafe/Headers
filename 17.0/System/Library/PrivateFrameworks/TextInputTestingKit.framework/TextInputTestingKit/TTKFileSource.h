@class NSString, NSDictionary, NSMutableArray;

@interface TTKFileSource : NSObject <TTKTestCaseSource> {
    NSMutableArray *_test_cases;
    int _test_case_index;
}

@property (readonly, nonatomic) float fileVersion;
@property (readonly, nonatomic) int majorVersion;
@property (readonly, nonatomic) int minorVersion;
@property (readonly, copy, nonatomic) NSString *inputMode;
@property (readonly, copy, nonatomic) NSDictionary *layouts;
@property (copy, nonatomic) id /* block */ onNewLayoutsFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (BOOL)parseData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)getNextTestCase;
- (id)init:(id)a0 inputMode:(id)a1 layouts:(id)a2;
- (void)parseLayouts:(id)a0;

@end
