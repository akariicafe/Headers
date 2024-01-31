@interface CADStatsEventInfo : NSObject {
    BOOL _isDetached;
    BOOL _hasRecurrenceRules;
    BOOL _isAllDay;
    BOOL _isBirthday;
    BOOL _isHoliday;
    BOOL _hasLocation;
    BOOL _locationHasKnownSpatialData;
    BOOL _hasClientLocation;
    BOOL _preferredLocationIsAConferenceRoom;
    BOOL _isCandidateForTravelAdvisories;
    BOOL _isImmediatelyEligibleForTravelAdvisories;
    BOOL _hasPredictedLocation;
    BOOL _isOnCalendarIgnoringEventAlerts;
    BOOL _isOnSharedCalendar;
    long long _travelAdvisoryBehavior;
    long long _participationStatus;
}

@end
