@class NSString, NSMutableArray;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager>

@property (readonly, nonatomic) NSMutableArray *processors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addProcessor:(id)a0;
- (void)removeProcessor:(id)a0;
- (void)processComponent:(id)a0 view:(id)a1;

@end
