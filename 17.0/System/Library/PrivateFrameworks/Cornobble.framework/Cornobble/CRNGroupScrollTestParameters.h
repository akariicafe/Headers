@class NSArray, RCPSyntheticEventStream, NSString;

@interface CRNGroupScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters>

@property (retain, nonatomic) NSArray *parameters;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (copy, nonatomic) NSString *testName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersByCombining:(id)a0 testName:(id)a1 completionHandler:(id /* block */)a2;

- (id /* block */)composerBlock;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 withParameters:(id)a1 completionHandler:(id /* block */)a2;

@end
