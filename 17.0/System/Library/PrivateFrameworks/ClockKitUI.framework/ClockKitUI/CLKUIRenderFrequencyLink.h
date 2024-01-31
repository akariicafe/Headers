@class NSString;

@interface CLKUIRenderFrequencyLink : NSObject <CLKUIRenderCoordinator> {
    long long _preferredFramesPerSecond;
    BOOL _paused;
}

@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)updateCoordinator;

@end
