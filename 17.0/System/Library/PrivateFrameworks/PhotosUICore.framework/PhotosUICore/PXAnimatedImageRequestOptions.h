@class NSObject;
@protocol OS_dispatch_queue;

@interface PXAnimatedImageRequestOptions : PXImageRequestOptions <PXImageRequestOptionsProperties>

@property (nonatomic) BOOL allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCropRect;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL allowSecondaryDegradedImage;
@property (nonatomic) long long loadingMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL preferHDR;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)photoKitRequestOptions;

@end
