@interface HUPresenceUserOptionState : NSObject

@property (readonly, nonatomic) unsigned long long activationGranularity;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isLocationAvailable) BOOL locationAvailable;

- (id)init;
- (id)initWithActivationGranularity:(unsigned long long)a0 selected:(BOOL)a1 locationAvailable:(BOOL)a2;

@end
