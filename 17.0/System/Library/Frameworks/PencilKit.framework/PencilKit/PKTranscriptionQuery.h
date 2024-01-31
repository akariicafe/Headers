@class NSString, CHTranscriptionQuery;

@interface PKTranscriptionQuery : PKQuery

@property (retain, nonatomic) CHTranscriptionQuery *transcriptionQuery;
@property (readonly, nonatomic) NSString *transcription;

- (void)pause;
- (void)dealloc;
- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (id)contextualTextResultsForContextStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
