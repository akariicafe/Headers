@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol TTKTestCaseSource;

@interface TTKDirSource : NSObject <TTKTestCaseSource> {
    NSString *_rootDir;
    NSString *_currDir;
    NSMutableArray *_testCaseDirs;
    NSMutableArray *_testCaseFiles;
    NSObject<TTKTestCaseSource> *_currTestCaseSource;
    BOOL _is_multiDir;
}

@property (readonly, nonatomic) float fileVersion;
@property (readonly, nonatomic) int majorVersion;
@property (readonly, nonatomic) int minorVersion;
@property (readonly, copy, nonatomic) NSString *inputMode;
@property (readonly, copy, nonatomic) NSMutableDictionary *layouts;
@property (copy, nonatomic) id /* block */ onNewLayoutsFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)getNextTestCase;
- (void)loadLayouts:(id)a0;
- (void)loadRootDir;

@end
