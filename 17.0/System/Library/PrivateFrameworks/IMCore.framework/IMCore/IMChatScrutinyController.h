@interface IMChatScrutinyController : NSObject

+ (id)sharedController;

- (double)_maxDurationForScrutinyMode;
- (void)markMessageAsCorrupt:(id)a0;
- (void)markMessageAsNotCorrupt:(id)a0;
- (id)scrutinyInfo;
- (void)setTranscriptRenderingMetadata:(id)a0 forChatIdentifier:(id)a1;
- (id)transcriptRenderingMetadataForChatIdentifier:(id)a0;

@end
