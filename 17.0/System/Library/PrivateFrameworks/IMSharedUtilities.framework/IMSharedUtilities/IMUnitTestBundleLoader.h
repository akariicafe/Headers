@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject

@property (readonly) IMUnitTestLogger *logger;

- (id)initWithLogger:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadTestBundle:(id)a0 bundle:(id *)a1 error:(id *)a2;

@end
