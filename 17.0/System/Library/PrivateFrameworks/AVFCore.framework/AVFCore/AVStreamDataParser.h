@class NSArray, NSString, NSData, NSError, AVAsset, AVStreamDataParserInternal;
@protocol AVStreamDataParserOutputHandling;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient, AVIntegrityChecking> {
    AVStreamDataParserInternal *_parser;
}

@property (class, readonly, nonatomic) NSArray *audiovisualMIMETypes;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic) BOOL preferSandboxedParsing;
@property (readonly, nonatomic, getter=isDefunct) BOOL defunct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AVStreamDataParserOutputHandling> delegate;
@property (readonly) long long status;
@property (readonly) long long status2;
@property (readonly) NSError *error;
@property (copy, nonatomic) NSArray *allowableMIMETypes;
@property (readonly, nonatomic) NSArray *fullListOfAllowableMIMETypes;
@property (readonly, nonatomic) AVAsset *asset;

+ (struct OpaqueCMBlockBuffer { } *)_createBlockBufferUsingNSData:(id)a0 withOffset:(unsigned long long)a1 withLength:(unsigned long long)a2;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0;
+ (BOOL)canParseExtendedMIMEType:(id)a0;
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)a0;

- (id)init;
- (void)dealloc;
- (void)_setError:(id)a0;
- (void)setSession:(id)a0;
- (void)expire;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)setDelegate:(id)a0;
- (void)setStatus:(long long)a0;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1 orDecryptorDidChange:(void *)a2 forTrackID:(int)a3;
- (BOOL)_ICYIsAllowed;
- (BOOL)_MPEG2TSIsAllowed;
- (BOOL)_MovieFragmentStreamIsAllowed;
- (BOOL)_WebVTTIsAllowed;
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer { } *)a0 withFlags:(unsigned long long)a1;
- (int)_attachToContentKeySession:(id)a0 contentKeyBoss:(struct CMBaseObject { } *)a1 failedSinceAlreadyAttachedToAnotherSession:(BOOL *)a2;
- (BOOL)_attachedToExternalContentKeySession;
- (void)_configureInternal;
- (void)_createAssetIfNecessary;
- (int)_createFigManifold:(struct OpaqueCMBlockBuffer { } *)a0 manifold:(struct OpaqueFigManifold **)a1;
- (int)_createFigManifoldRemote:(struct OpaqueCMBlockBuffer { } *)a0 manifold:(struct OpaqueFigManifold **)a1;
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0 manifold:(struct OpaqueFigManifold **)a1;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 discoveredNewTrackID:(int)a1 mediaType:(id)a2;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 pushedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 trackID:(int)a2 flags:(unsigned int)a3;
- (int)_figManifold:(struct OpaqueFigManifold { } *)a0 trackDidEnd:(int)a1;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold { } *)a0;
- (id)_fullListOfAllowableMIMETypes;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)a0;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)a0;
- (void)_willDeallocOrFinalize;
- (void)appendStreamData:(id)a0;
- (void)appendStreamData:(id)a0 withFlags:(unsigned long long)a1;
- (id)contentKeySession;
- (void)contentKeySession:(id)a0 didProvideContentKeyRenewalRequest:(id)a1;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)a0;
- (BOOL)hasProtector;
- (id)initInternalUnitTestOnly;
- (void)processContentKeyResponseData:(id)a0 forTrackID:(int)a1;
- (void)processContentKeyResponseError:(id)a0 forTrackID:(int)a1;
- (void)providePendingMediaData;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)a0;
- (void)setShouldProvideMediaData:(BOOL)a0 forTrackID:(int)a1;
- (BOOL)shouldProvideMediaDataForTrackID:(int)a0;
- (id)streamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 trackID:(int)a2 options:(id)a3 error:(id *)a4;

@end
