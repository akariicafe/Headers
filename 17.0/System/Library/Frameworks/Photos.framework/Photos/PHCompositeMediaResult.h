@class NSDictionary, NSMutableDictionary;

@interface PHCompositeMediaResult : NSObject {
    NSMutableDictionary *_mutableInfo;
    NSDictionary *_imageProperties;
    BOOL _isInCloud;
    BOOL _cancelled;
}

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly, nonatomic) BOOL isDerivedFromDeferredPreview;
@property (nonatomic) BOOL isInCloud;
@property (nonatomic, getter=isCancelled) BOOL cancelled;

+ (id)resultWithRequestID:(int)a0 error:(id)a1;

- (id)videoURL;
- (id)fingerPrint;
- (id)uniformTypeIdentifier;
- (id)imageData;
- (id)initWithRequestID:(int)a0;
- (id)imageURL;
- (long long)uiOrientation;
- (id)exifOrientation;
- (void)setSandboxExtensionToken:(id)a0;
- (struct CGImage { } *)imageRef;
- (id)sandboxExtensionToken;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)info;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (id)imageProperties;
- (id)error;
- (void)setErrorIfNone:(id)a0;
- (id)_sanitizedError;
- (void)setInfo:(id)a0 forKey:(id)a1;
- (void)addInfoFromDictionary:(id)a0;
- (id)adjustmentData;
- (id)baseVersionNeeded;
- (BOOL)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (void)clearError;
- (id)errorInfoKey;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)inCloudInfoKey;
- (id)mediaMetadata;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;

@end
