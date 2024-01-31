@class NSString, BGRepeatingSystemTaskRequest;

@interface HMDBackgroundSystemTaskRequest : HMFObject

@property (readonly) BGRepeatingSystemTaskRequest *taskRequest;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) BOOL requiresInexpensiveNetworkConnectivity;
@property (nonatomic) BOOL requiresSignificantUserInactivity;
@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithTaskRequest:(id)a0;

@end
