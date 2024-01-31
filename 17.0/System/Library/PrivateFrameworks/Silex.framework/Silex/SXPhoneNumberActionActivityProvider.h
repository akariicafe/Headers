@class NSString;
@protocol SXHost, SXMessagePresenter, SXDeviceCapabilities;

@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) id<SXMessagePresenter> messagePresenter;
@property (readonly, nonatomic) id<SXDeviceCapabilities> deviceCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)copy:(id)a0;
- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (void)call:(id)a0 showDialog:(BOOL)a1;
- (void)faceTime:(id)a0;
- (id)initWithHost:(id)a0 messagePresenter:(id)a1 deviceCapabilities:(id)a2;
- (void)message:(id)a0;

@end
