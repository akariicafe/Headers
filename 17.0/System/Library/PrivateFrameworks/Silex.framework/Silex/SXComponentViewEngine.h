@class NSString, SXComponentTypeMatching;
@protocol SXComponentViewPostProcessorManager;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine>

@property (readonly, nonatomic) SXComponentTypeMatching *factoryMatching;
@property (readonly, nonatomic) id<SXComponentViewPostProcessorManager> postProcessorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addFactory:(id)a0;
- (id)componentViewForComponent:(id)a0;
- (void)removeFactory:(id)a0;
- (id)initWithPostProcessorManager:(id)a0;

@end
