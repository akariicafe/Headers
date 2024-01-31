@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property (readonly, nonatomic) NSArray *settingOutputDeviceUIDs;

- (unsigned int)contextType;
- (id)description;
- (unsigned long long)type;
- (id)initWithAddingDeviceUIDs:(id)a0 removingDeviceUIDs:(id)a1 settingDeviceUIDs:(id)a2 clusterAwareAddingOutputDeviceUIDs:(id)a3 clusterAwareRemovingOutputDeviceUIDs:(id)a4 clusterAwareSettingOutputDeviceUIDs:(id)a5;

@end
