@interface CKDVolumeManager : NSObject

+ (void)_rebuildVolumes;
+ (void)initialize;
+ (id)volumeForDeviceID:(id)a0;
+ (id)volumeForVolumeUUID:(id)a0;
+ (id)volumeUUIDForDeviceID:(id)a0;
+ (id)deviceIDForVolumeUUID:(id)a0;

@end
