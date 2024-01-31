@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent

@property (nonatomic, getter=isAutomaticUpdateEnabled) BOOL automaticUpdateEnabled;

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)a0;

@end
