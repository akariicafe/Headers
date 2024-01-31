@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {
    id /* block */ _invalidationHandler;
}

@property (readonly, copy, nonatomic) NSSet *scenes;

- (void)dealloc;
- (void)invalidate;
- (id)initWithScenes:(id)a0 invalidationHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
