@class NSString, BLSHBacklightEnvironmentPresentation;

@interface BLSHPendingUpdatePresentation : NSObject <BLSHPendingOperation>

@property (readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property long long targetBacklightState;
@property (readonly) long long type;
@property (getter=isStarted) BOOL started;
@property (getter=isCompleted) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentation:(id)a0;
- (void).cxx_destruct;

@end
