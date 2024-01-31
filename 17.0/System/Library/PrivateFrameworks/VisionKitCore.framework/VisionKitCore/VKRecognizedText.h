@class NSString, VNRecognizedTextObservation, NSMutableDictionary;

@interface VKRecognizedText : VKRecognizedItem {
    NSMutableDictionary *_transcripts;
}

@property (readonly, nonatomic) VNRecognizedTextObservation *observation;
@property (readonly, nonatomic) NSString *transcript;

- (id)description;
- (void).cxx_destruct;
- (void)associateWithItem:(id)a0;
- (id)initWithFrameInfo:(id)a0 textBlockObservation:(id)a1;
- (BOOL)shouldAssociateWithItem:(id)a0;

@end
