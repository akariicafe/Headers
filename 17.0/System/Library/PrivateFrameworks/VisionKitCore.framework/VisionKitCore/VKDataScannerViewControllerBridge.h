@class NSDate;
@protocol VKDataScannerViewControllerBridgeDelegate;

@interface VKDataScannerViewControllerBridge : NSObject {
    struct MGNotificationTokenStruct { } *_notificationToken;
    BOOL _isScanningForText;
    BOOL _isScanningForBarcodes;
    NSDate *_sessionStartDate;
}

@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) BOOL isCameraRestricted;
@property (class, readonly, nonatomic) BOOL isOpticalFlowForTextEnabled;

@property (weak, nonatomic) id<VKDataScannerViewControllerBridgeDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)endSession;
- (void).cxx_destruct;
- (void)beginSessionForText:(BOOL)a0 barcodes:(BOOL)a1;

@end
