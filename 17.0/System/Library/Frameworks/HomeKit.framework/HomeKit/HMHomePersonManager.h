@class NSString;

@interface HMHomePersonManager : HMPersonManager <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)personManagerUUIDFromHomeUUID:(id)a0;

- (id)logIdentifier;
- (id)initWithHome:(id)a0;

@end
