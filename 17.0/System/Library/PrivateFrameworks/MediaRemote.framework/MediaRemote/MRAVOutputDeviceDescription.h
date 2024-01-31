@class NSArray, _MRAVOutputDeviceDescriptorProtobuf, NSString;
@protocol MRAVOutputDeviceDescriptionImpl;

@interface MRAVOutputDeviceDescription : NSObject

@property (retain, nonatomic) id<MRAVOutputDeviceDescriptionImpl> impl;
@property (retain, nonatomic) NSArray *subComponents;
@property (readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *composedTypeDescription;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader;
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;

- (id)initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsUID:(id)a0;
- (id)initWithAVDescription:(id)a0;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2 name:(id)a3;
- (id)initWithDeviceType:(unsigned int)a0 deviceSubtype:(unsigned int)a1 uid:(id)a2 name:(id)a3 modelID:(id)a4;

@end
