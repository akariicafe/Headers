@class NSString;

@interface HMDMediaDestinationControllerDestinationLogEvent : HMDMediaDestinationControllerLogEvent

@property (readonly, copy) NSString *existingDestinationType;
@property (readonly, copy) NSString *destinationType;

- (void).cxx_destruct;
- (id)initWithExistingDestinationType:(id)a0 destinationType:(id)a1 isTriggeredOnControllerDevice:(id)a2 userPrivilege:(id)a3;

@end
