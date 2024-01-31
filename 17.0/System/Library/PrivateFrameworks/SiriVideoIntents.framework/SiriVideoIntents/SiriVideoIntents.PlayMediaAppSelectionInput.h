@class NSSet;

@interface SiriVideoIntents.PlayMediaAppSelectionInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ result_appUsageScore1Day;
    void /* unknown type, empty encoding */ result_appUsageScore7Days;
    void /* unknown type, empty encoding */ supports_general;
    void /* unknown type, empty encoding */ supports_audiobooks;
    void /* unknown type, empty encoding */ supports_podcasts;
    void /* unknown type, empty encoding */ result_nowPlayingUsage7Days;
    void /* unknown type, empty encoding */ result_foregroundAppIsLastUsed;
    void /* unknown type, empty encoding */ result_foregroundAppDuetElapsedSeconds;
    void /* unknown type, empty encoding */ result_clientCarConnected;
    void /* unknown type, empty encoding */ result_clientCarplay;
    void /* unknown type, empty encoding */ result_clientDaylight;
    void /* unknown type, empty encoding */ result_clientDevice;
    void /* unknown type, empty encoding */ result_clientHourOfDay;
    void /* unknown type, empty encoding */ result_clientIsActiveForegroundApp;
    void /* unknown type, empty encoding */ result_clientLocaleIdentifier;
    void /* unknown type, empty encoding */ result_clientLocaleLanguage;
    void /* unknown type, empty encoding */ result_clientLocked;
    void /* unknown type, empty encoding */ result_clientMotion;
    void /* unknown type, empty encoding */ result_clientNavigating;
    void /* unknown type, empty encoding */ result_clientWorkout;
    void /* unknown type, empty encoding */ result_entitySearchAllTimeInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchNormalizedSecondsSinceLastInteraction;
    void /* unknown type, empty encoding */ result_entitySearchTrailing10MinuteInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing1DayInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing1HourInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing28DayInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing2MinuteInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing6HourInteractionShare;
    void /* unknown type, empty encoding */ result_entitySearchTrailing7DayInteractionShare;
    void /* unknown type, empty encoding */ result_mediaNamePresent;
    void /* unknown type, empty encoding */ result_mediaType;
    void /* unknown type, empty encoding */ result_isNowPlayingDuetApp;
    void /* unknown type, empty encoding */ result_nowPlayingDuetElapsedSeconds;
    void /* unknown type, empty encoding */ result_nowPlayingState;
    void /* unknown type, empty encoding */ result_spotlightMatches;
    void /* unknown type, empty encoding */ result_libraryItems;
    void /* unknown type, empty encoding */ result_subscriptionStatus;
    void /* unknown type, empty encoding */ result_isNowPlayingApp;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
