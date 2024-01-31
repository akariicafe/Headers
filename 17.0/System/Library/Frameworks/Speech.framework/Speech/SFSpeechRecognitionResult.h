@class NSArray, NSString, SFSpeechRecognitionMetadata, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <SRSampling, NSCopying, NSSecureCoding> {
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SFTranscription *rawTranscription;
@property (readonly, copy, nonatomic) NSArray *rawTranscriptions;
@property (readonly, copy, nonatomic) SFTranscription *bestTranscription;
@property (readonly, copy, nonatomic) NSArray *transcriptions;
@property (readonly, nonatomic, getter=isFinal) BOOL final;
@property (readonly, nonatomic) SFSpeechRecognitionMetadata *speechRecognitionMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)_initWithBestTranscription:(id)a0 rawTranscription:(id)a1 final:(BOOL)a2 speechRecognitionMetadata:(id)a3;

@end
