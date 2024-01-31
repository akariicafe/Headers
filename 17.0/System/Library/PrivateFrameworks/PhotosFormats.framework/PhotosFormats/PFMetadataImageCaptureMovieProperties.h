@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary *_iccMovieProperties;
}

- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)plistForEncoding;
- (void).cxx_destruct;
- (id)_makeGPSProperties;
- (id)livePhotoPairingIdentifier;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)originalFilenamee;

@end
