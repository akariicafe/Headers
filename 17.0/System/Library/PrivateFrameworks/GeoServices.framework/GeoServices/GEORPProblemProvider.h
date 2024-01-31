@class NSString, GEOProtobufSession, GEOProtobufSessionTask;

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *submissionTask;
@property (retain, nonatomic) GEOProtobufSessionTask *statusTask;
@property (copy, nonatomic) id /* block */ submissionErrorHandler;
@property (copy, nonatomic) id /* block */ submissionFinishedHandler;
@property (copy, nonatomic) id /* block */ statusErrorHandler;
@property (copy, nonatomic) id /* block */ statusFinishedHandler;

- (id)init;
- (void)cancelRequest;
- (void).cxx_destruct;
- (id)cancelError;
- (void)didCompleteStatusTask;
- (void)didCompleteSubmissionTask;
- (void)protobufSession:(id)a0 didCompleteTask:(id)a1;
- (void)startStatusRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;
- (void)startSubmissionRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;

@end
