@interface PUAssetSharedViewModelChange : PUViewModelChange

@property (nonatomic) BOOL loadingStatusChanged;
@property (nonatomic) BOOL saveProgressChanged;
@property (nonatomic) BOOL saveStateChanged;
@property (nonatomic) BOOL needsDeferredProcessingChanged;
@property (nonatomic) BOOL deferredProcessingNeededChanged;
@property (nonatomic) BOOL flippingFullSizeRenderStateChanged;

- (BOOL)hasChanges;

@end
