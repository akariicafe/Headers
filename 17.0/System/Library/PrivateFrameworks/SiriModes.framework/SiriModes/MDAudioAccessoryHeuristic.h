@class AVOutputContext, AFNotifyObserver, MDModeDecision;

@interface MDAudioAccessoryHeuristic : NSObject <MDModeHeuristic> {
    BOOL _connectedToAudioAccessory;
    AFNotifyObserver *_connectedOutputDevicesObserver;
    AVOutputContext *_sharedSystemAudioContext;
    MDModeDecision *_modeDecisionBasedOnAudioAccessory;
}

- (id)init;
- (void).cxx_destruct;
- (void)_connectedOutputDevicesDidChange:(id)a0;
- (void)_fetchConnectedAudioAccessoryState;
- (id)determineCurrentMode;
- (BOOL)isConnectedToAudioAccessory;

@end
