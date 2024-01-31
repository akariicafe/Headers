@class GCController, MRGameControllerDaemonProxy;
@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject {
    MRGameControllerDaemonProxy *_remote;
}

@property (retain, nonatomic) GCController *controller;
@property (readonly, nonatomic) int profile;
@property (nonatomic) double buttonAUpDelay;
@property (weak, nonatomic) id<MREmulatedGameControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (void)_handleGameControllerDidChange:(id)a0;
- (void)sendGameControllerEvent:(id)a0;

@end
