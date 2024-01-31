@class NSString, NSArray;
@protocol AVOutputDeviceDescription;

@interface MRAVConcreteOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl>

@property (readonly, nonatomic) id<AVOutputDeviceDescription> avDescription;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic, getter=isClusterLeader) BOOL clusterLeader;
@property (readonly, nonatomic) NSArray *subComponents;
@property (readonly, nonatomic) BOOL supportsEngageOnClusterActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAVDescription:(id)a0;

@end
