@class AVWeakReference, NSString, NSArray, NSURL, AVAssetWriterInputConfigurationState, AVOutputSettings, NSDictionary, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputHelper : NSObject

@property (readonly, nonatomic) AVAssetWriterInputConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) AVOutputSettings *outputSettings;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *sourceFormatHint;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) int mediaTimeScale;
@property (readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic) float preferredVolume;
@property (nonatomic) long long layer;
@property (nonatomic) short alternateGroupID;
@property (nonatomic) short provisionalAlternateGroupID;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported;
@property (readonly, nonatomic) BOOL canPerformMultiplePasses;
@property (readonly, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly, nonatomic) BOOL shouldRespondToInitialPassDescription;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } preferredMediaChunkDuration;
@property (nonatomic) long long preferredMediaChunkAlignment;
@property (nonatomic) long long preferredMediaChunkSize;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) BOOL maximizePowerEfficiency;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;

- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)stopRequestingMediaData;
- (void)markAsFinished;
- (void)dealloc;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)didStartInitialSession;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (void)markCurrentPassAsFinished;
- (void)addTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (id)associatedInputsWithTrackAssociationType:(id)a0;
- (id)description;
- (id)initWithConfigurationState:(id)a0;
- (BOOL)prepareToFinishWritingReturningError:(id *)a0;
- (id)availableTrackAssociationTypes;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)a0;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (void)prepareToEndSession;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)a0;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)a0;

@end
