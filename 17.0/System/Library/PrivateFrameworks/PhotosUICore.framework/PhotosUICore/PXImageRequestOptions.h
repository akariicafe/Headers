@class NSObject;
@protocol OS_dispatch_queue;

@interface PXImageRequestOptions : NSObject <PXImageRequestOptionsProperties, NSCopying>

@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
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
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyPropertiesToOptions:(id)a0;
- (id)photoKitRequestOptions;

@end
