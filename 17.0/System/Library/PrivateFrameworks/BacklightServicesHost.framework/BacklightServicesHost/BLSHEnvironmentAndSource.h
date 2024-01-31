@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHEnvironmentAndSource : NSObject

@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, nonatomic) id environmentSource;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 environmentSource:(id)a1;

@end
