@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    struct opaqueVCCaptionsDecoder { } *_captionsDecoder;
}

@property (readonly) id delegate;
@property (retain, nonatomic) VCCaptionsTranscription *currentTranscription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;

@end
