@class NSNumber;

@interface MTROtaSoftwareUpdateRequestorClusterStateTransitionEvent : MTROTASoftwareUpdateRequestorClusterStateTransitionEvent

@property (copy, nonatomic) NSNumber *previousState;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;
@property (copy, nonatomic) NSNumber *reason;
@property (copy, nonatomic) NSNumber *targetSoftwareVersion;


@end
