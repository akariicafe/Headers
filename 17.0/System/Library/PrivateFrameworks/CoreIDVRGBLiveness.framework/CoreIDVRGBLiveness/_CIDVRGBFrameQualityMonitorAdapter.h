@class NSString;
@protocol CIDVRGBCaptureImageQualityDelegate;

@interface _CIDVRGBFrameQualityMonitorAdapter : NSObject <PADFrameQualityMonitor> {
    id<CIDVRGBCaptureImageQualityDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCaptureDelegate:(id)a0;
- (void)verifyQualityForFrame:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
