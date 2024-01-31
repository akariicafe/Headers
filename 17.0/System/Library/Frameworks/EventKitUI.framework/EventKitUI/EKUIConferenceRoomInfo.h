@class NSArray, EKRequestAvailabilityOperation;

@interface EKUIConferenceRoomInfo : NSObject

@property (retain, nonatomic) EKRequestAvailabilityOperation *availabilityRequest;
@property (retain, nonatomic) NSArray *availabilitySpans;
@property long long availabilityType;

- (id)init;
- (void).cxx_destruct;

@end
