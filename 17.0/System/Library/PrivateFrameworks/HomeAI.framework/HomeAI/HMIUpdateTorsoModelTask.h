@class NSSet;

@interface HMIUpdateTorsoModelTask : HMIHomeTask

@property (readonly) NSSet *torsoAnnotations;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 torsoAnnotations:(id)a2;
- (void)mainInsideAutoreleasePool;

@end
