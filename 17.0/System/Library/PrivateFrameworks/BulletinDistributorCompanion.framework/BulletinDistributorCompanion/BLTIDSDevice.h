@class NSString, IDSDevice;

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {
    IDSDevice *_device;
}

@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isCloudReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithIDSDevice:(id)a0;

@end
