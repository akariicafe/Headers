@class NSString;

@interface AVCScreenCaptureTestDelegate : NSObject <AVCScreenCaptureDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)serverDidDisconnect:(id)a0;
- (void)screenCapture:(id)a0 didStart:(BOOL)a1 withError:(id)a2;
- (void)screenCapture:(id)a0 didStop:(BOOL)a1 withError:(id)a2;

@end
