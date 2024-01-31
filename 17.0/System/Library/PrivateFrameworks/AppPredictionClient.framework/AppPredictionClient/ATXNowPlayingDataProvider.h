@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}

- (id)init;
- (void).cxx_destruct;
- (id)currentNowPlayingEvent;
- (BOOL)isTVExperienceAppNowPlaying;

@end
