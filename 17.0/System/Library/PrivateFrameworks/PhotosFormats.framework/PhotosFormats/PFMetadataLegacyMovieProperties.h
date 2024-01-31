@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary *_audioVideoProperties;
}

- (id)cameraMake;
- (id)_makeGeometryProperties;
- (id)nominalFrameRate;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)_makeDateTimeProperties;
- (id)plistForEncoding;
- (void).cxx_destruct;
- (id)software;
- (id)_makeGPSProperties;
- (id)cameraModel;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)audioSampleRate;
- (BOOL)isSloMo;
- (BOOL)isMovie;
- (id)audioDataRate;
- (id)audioTrackFormat;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)videoCodecName;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;
- (id)audioTrackFormatFlags;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)videoDataRate;

@end
