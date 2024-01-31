@class NSNumber;

@interface ATXModeSetupPredictionFeatures : NSObject <ATXJSONSerializableProtocol>

@property (nonatomic) BOOL isDigestCurrentlyEnabled;
@property (retain, nonatomic) NSNumber *globalAllPagesFolderCount;
@property (retain, nonatomic) NSNumber *globalAllPagesWidgetCount;
@property (retain, nonatomic) NSNumber *homePageFolderCountBucket;
@property (retain, nonatomic) NSNumber *homePageWidgetCountBucket;
@property (retain, nonatomic) NSNumber *globalAppLaunchCountWithinLastNDays;
@property (retain, nonatomic) NSNumber *globalAppLaunchCountWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriorsWithinLastNDays;
@property (retain, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriorsWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeInferredDurationInLastNDays;
@property (retain, nonatomic) NSNumber *modeInferredDurationInLast1Day;
@property (retain, nonatomic) NSNumber *modeInferredCountInLastNDays;
@property (retain, nonatomic) NSNumber *modeInferredCountInLast1Day;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedWithinLastNDays;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedWithinLast1Day;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedWithinLastNDays;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedWithinLastNDays;
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedWithinLast1Day;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedWithinLastNDays;
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLastNDays;
@property (retain, nonatomic) NSNumber *modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLast1Day;
@property (retain, nonatomic) NSNumber *globalPosterConfigurationsCount;
@property (retain, nonatomic) NSNumber *globalInterruptedAppSessionsCountWithinLastNDays;
@property (retain, nonatomic) NSNumber *globalInterruptedAppSessionsCountWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeInterruptedAppSessionsCountWithinLastNDays;
@property (retain, nonatomic) NSNumber *modeInterruptedAppSessionsCountWithinLast1Day;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountWithinLastNDaysBasedOnAllowListOfMode;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountWithinLastNDaysBasedOnDenyListOfMode;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountWithinLast1DayBasedOnAllowListOfMode;
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountWithinLast1DayBasedOnDenyListOfMode;

- (id)init;
- (id)initFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
