@class AVDispatchOnce, AVAssetInspectorLoader, NSDictionary, AVAssetInspector, NSMutableArray;

@interface AVCompositionInternal : NSObject {
    struct OpaqueFigMutableComposition { } *mutableComposition;
    AVDispatchOnce *formatReaderInitializationOnce;
    AVDispatchOnce *assetInspectorInitializationOnce;
    AVDispatchOnce *tracksInitializationOnce;
    struct OpaqueFigFormatReader { } *formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    struct CGSize { double width; double height; } naturalSize;
    NSDictionary *URLAssetInitializationOptions;
    NSMutableArray *tracks;
    AVDispatchOnce *figAssetInitializationOnce;
    struct OpaqueFigAsset { } *figAsset;
}

@end
