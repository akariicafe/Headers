@interface WeatherMaps.InteractiveRefreshTimer : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ pausedTimerNextFireDate;
    void /* unknown type, empty encoding */ didExperienceSignificantTimeChangeWhilePaused;
}

- (void)notifiedSignificantTimeChange:(id)a0;

@end
