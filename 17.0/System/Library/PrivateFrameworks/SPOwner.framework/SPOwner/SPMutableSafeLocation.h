@class NSString, CLLocation;

@interface SPMutableSafeLocation : SPSafeLocation

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) long long approvalState;

@end
