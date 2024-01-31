@class NSString;

@interface BlastDoorAudioMessageAttachmentInfo : NSObject {
    void /* unknown type, empty encoding */ audioMessageAttachmentInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *inlineAttachmentKey;
@property (nonatomic, readonly) NSString *audioTranscription;

- (id)init;
- (void).cxx_destruct;

@end
