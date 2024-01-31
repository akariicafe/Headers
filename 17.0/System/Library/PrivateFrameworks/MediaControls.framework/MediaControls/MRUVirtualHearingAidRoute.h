@class NSString;
@protocol MRUVirtualHearingAidRouteObserver;

@interface MRUVirtualHearingAidRoute : MPAVOutputDeviceRoute <AXHAServerDelegate>

@property (readonly, nonatomic) BOOL isConnecting;
@property (weak, nonatomic) id<MRUVirtualHearingAidRouteObserver> hearingAidDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disconnect;

- (void)disconnect;
- (void)connect;
- (void).cxx_destruct;
- (void)hearingServerDidDie:(id)a0;
- (void)hearingAidConnectionDidChange:(BOOL)a0;
- (id)initWithHearingDeviceName:(id)a0;

@end
