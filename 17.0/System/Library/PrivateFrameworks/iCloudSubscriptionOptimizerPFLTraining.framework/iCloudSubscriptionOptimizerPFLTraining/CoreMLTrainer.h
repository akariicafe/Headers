@class NSURL, NSString;

@interface CoreMLTrainer : NSObject <Evaluator>

@property (copy, nonatomic) NSURL *modelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)evaluateWithModelURL:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)processModelURL:(id)a0;

@end
