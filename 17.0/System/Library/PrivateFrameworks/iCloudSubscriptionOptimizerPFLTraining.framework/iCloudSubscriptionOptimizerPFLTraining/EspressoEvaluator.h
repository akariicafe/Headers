@class NSURL, NSString;

@interface EspressoEvaluator : NSObject <Evaluator>

@property (copy, nonatomic) NSURL *modelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
