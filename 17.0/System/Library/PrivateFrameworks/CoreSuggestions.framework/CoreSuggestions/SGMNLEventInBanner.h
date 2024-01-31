@class PETScalarEventTracker;

@interface SGMNLEventInBanner : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 interface:(struct SGMNLEventInterface_ { unsigned long long x0; })a1 actionType:(struct SGMNLEventActionType_ { unsigned long long x0; })a2 eventType:(id)a3 languageID:(id)a4 daysFromStartDate:(unsigned long long)a5 confidenceScore:(unsigned long long)a6 significantSender:(struct SGMBoolOption_ { unsigned long long x0; })a7 participantCount:(unsigned long long)a8 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x0; })a9 usedBubblesCount:(unsigned long long)a10 titleSource:(struct SGMEventTitleSource_ { unsigned long long x0; })a11 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x0; })a12 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x0; })a13 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x0; })a14 locationAdj:(struct SGMEventLocationAdj_ { unsigned long long x0; })a15 addedAttendeesCount:(id)a16 calendarAppUsageLevel:(id)a17 mailAppUsageLevel:(struct SGMAppUsageLevel_ { unsigned long long x0; })a18 messagesAppUsageLevel:(struct SGMAppUsageLevel_ { unsigned long long x0; })a19;

@end
