@interface VCVideoRuleCollectionsMediaRecorder : NSObject {
    BOOL _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
