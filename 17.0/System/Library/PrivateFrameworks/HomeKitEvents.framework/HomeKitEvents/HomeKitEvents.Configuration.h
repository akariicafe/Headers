@class CKContainerID;

@interface HomeKitEvents.Configuration : NSObject

@property (class, nonatomic, readonly) CKContainerID *containerID;

+ (void)resetWithCompletion:(id /* block */)a0;
+ (id)zoneNameForZoneUUID:(id)a0;
+ (id)zoneUUIDForHomeIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
