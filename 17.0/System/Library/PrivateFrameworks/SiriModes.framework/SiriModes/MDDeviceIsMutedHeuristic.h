@class MDModeDecision, AFNotifyObserver;

@interface MDDeviceIsMutedHeuristic : NSObject <MDModeHeuristic> {
    AFNotifyObserver *_ringerStateObserver;
    MDModeDecision *_displayOnlyModeDecision;
}

- (id)init;
- (void).cxx_destruct;
- (id)determineCurrentMode;
- (id)initWithRingerStateObserver:(id)a0;
- (BOOL)isDeviceSilentMode;

@end
