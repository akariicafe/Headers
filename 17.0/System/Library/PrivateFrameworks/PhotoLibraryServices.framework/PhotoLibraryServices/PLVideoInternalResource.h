@class NSString, NSNumber, PLInternalResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    NSNumber *_cachedIsPlayable;
}

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsHDR;

- (BOOL)isPlayable;
- (id)uniformTypeIdentifier;
- (BOOL)isDownloadable;
- (BOOL)isLocallyAvailable;
- (unsigned int)version;
- (unsigned short)storeClassID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isStreamable;
- (id)fileURLIfLocal;
- (BOOL)isHDRDerivative;
- (BOOL)isOriginalVideo;
- (id)additionalDescription;
- (id)cachedIsPlayable;
- (BOOL)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)a0;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (BOOL)isLargeQuality;
- (BOOL)isLocallyGeneratable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isSDRFallback;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)a0;

@end
