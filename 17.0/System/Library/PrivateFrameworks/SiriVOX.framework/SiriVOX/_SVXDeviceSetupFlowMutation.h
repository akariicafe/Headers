@class NSString, SVXDeviceSetupFlow, NSArray;

@interface _SVXDeviceSetupFlowMutation : NSObject <SVXDeviceSetupFlowMutating> {
    SVXDeviceSetupFlow *_baseModel;
    NSString *_identifier;
    NSArray *_scenes;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasScenes : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setIdentifier:(id)a0;
- (id)generate;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setScenes:(id)a0;

@end
