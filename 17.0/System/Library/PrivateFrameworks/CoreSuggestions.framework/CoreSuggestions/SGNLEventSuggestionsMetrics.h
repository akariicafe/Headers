@class SGMNLEventInBanner, SGMDDLinkShown;

@interface SGNLEventSuggestionsMetrics : NSObject

@property (retain, nonatomic) SGMDDLinkShown *ddLinkShown;
@property (retain, nonatomic) SGMNLEventInBanner *nlEvent;

+ (id)instance;
+ (void)shownViaDataDetectorsLinkInApp:(long long)a0;
+ (void)recordUserInteraction:(unsigned long long)a0 withLinkInApplication:(long long)a1 eventPrefillMode:(unsigned long long)a2 eventTypeClassification:(id)a3 proposedEvent:(id)a4 confirmedEvent:(id)a5;
+ (unsigned long long)bucketizeInteger:(unsigned long long)a0 withBucketSize:(unsigned long long)a1 limit:(unsigned long long)a2;
+ (struct SGMEventDurationAdj_ { unsigned long long x0; })diffEventDurationChangedFrom:(double)a0 to:(double)a1;
+ (struct SGMEventLocationAdj_ { unsigned long long x0; })diffEventLocationFrom:(id)a0 to:(id)a1;
+ (struct SGMEventDateAdj_ { unsigned long long x0; })diffEventStartDateChangedFrom:(id)a0 oldTimeZone:(id)a1 to:(id)a2 newTimeZone:(id)a3;
+ (struct SGMEventStringAdj_ { unsigned long long x0; })diffEventTitleChangedFrom:(id)a0 to:(id)a1;
+ (id)getAddedAttendeesCountFromEKEvent:(id)a0;
+ (void)recordInteractionForEventWithInterface:(unsigned short)a0 actionType:(unsigned short)a1 eventType:(id)a2 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x0; })a3 harvestedEKEvent:(id)a4 curatedEKEvent:(id)a5;
+ (void)recordInteractionForEventWithInterface:(unsigned short)a0 actionType:(unsigned short)a1 eventType:(id)a2 languageID:(id)a3 startDate:(id)a4 confidenceScore:(float)a5 participantCount:(char)a6 significantSender:(struct SGMBoolOption_ { unsigned long long x0; })a7 extractionLevel:(struct SGMNLEventExtractionLevel_ { unsigned long long x0; })a8 usedBubblesCount:(char)a9 titleSource:(struct SGMEventTitleSource_ { unsigned long long x0; })a10 titleAdj:(struct SGMEventStringAdj_ { unsigned long long x0; })a11 dateAdj:(struct SGMEventDateAdj_ { unsigned long long x0; })a12 duraAdj:(struct SGMEventDurationAdj_ { unsigned long long x0; })a13 locationAdj:(struct SGMEventLocationAdj_ { unsigned long long x0; })a14 addedAttendeesCount:(id)a15 calendarAppUsageLevel:(float)a16 mailAppUsageLevel:(char)a17 messagesAppUsageLevel:(char)a18;
+ (void)recordInteractionForEventWithInterface:(unsigned short)a0 actionType:(unsigned short)a1 harvestedEKEvent:(id)a2 curatedEKEvent:(id)a3;
+ (void)recordInteractionForEventWithInterface:(unsigned short)a0 actionType:(unsigned short)a1 harvestedSGEvent:(id)a2 curatedEKEvent:(id)a3;
+ (double)round:(double)a0 toSignificantFigures:(long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
