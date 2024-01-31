@class NSArray, NSDictionary;
@protocol BWMetadataDetectedResultsObserver;

@interface BWMRCNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    long long _lastDetectedMRCCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectOfInterest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rectOfInterestLock;
    BOOL _hasPendingRectOfInterestUpdate;
    BOOL _lowPowerModeEnabled;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (id)init;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setLowPowerModeEnabled:(BOOL)a0;
- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)setMrcIdentifiers:(id)a0;
- (id)nodeSubType;
- (BOOL)lowPowerModeEnabled;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mrcIdentifiers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterest;

@end
