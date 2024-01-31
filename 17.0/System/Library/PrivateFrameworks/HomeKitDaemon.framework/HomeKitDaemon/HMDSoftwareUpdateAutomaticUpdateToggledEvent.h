@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent

@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)eventWithAutomaticUpdateEnabled:(BOOL)a0;

@end
