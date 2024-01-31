@class NSArray;

@interface ICPreviewDeviceContext : NSObject {
    NSArray *_deviceScales;
}

@property (copy) NSArray *scalableDeviceInfo;
@property (copy) NSArray *nonScalableDeviceInfo;
@property (readonly) NSArray *deviceScales;
@property (readonly) double maxDeviceScale;

+ (id)sharedContext;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (double)maxSizeOfPreviewDeviceInfoImage;
- (id)deviceInfoScalable:(BOOL)a0;
- (void)screensChangedNotification:(id)a0;

@end
