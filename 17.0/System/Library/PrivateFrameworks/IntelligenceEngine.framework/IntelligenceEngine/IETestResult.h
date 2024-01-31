@class NSString;

@interface IETestResult : NSObject

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *flowId;
@property (retain, nonatomic) NSString *testName;
@property (retain, nonatomic) NSString *summary;
@property (readonly) unsigned long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
