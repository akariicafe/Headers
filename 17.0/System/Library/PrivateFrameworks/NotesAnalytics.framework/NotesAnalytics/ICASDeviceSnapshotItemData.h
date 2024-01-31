@class NSString, NSNumber;

@interface ICASDeviceSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) NSNumber *bioAuthEnabled;
@property (readonly, nonatomic) NSNumber *localNotesEnabled;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *deviceID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDeviceModel:(id)a0 devicePlatform:(id)a1 bioAuthEnabled:(id)a2 localNotesEnabled:(id)a3 osVersion:(id)a4 deviceID:(id)a5;

@end
