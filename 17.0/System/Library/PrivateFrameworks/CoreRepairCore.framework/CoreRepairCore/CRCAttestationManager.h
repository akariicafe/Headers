@class NSString, NSProgress;

@interface CRCAttestationManager : NSObject <NSURLSessionDelegate, NSProgressReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (id)init;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)transformServerCertResponseUsing:(id)a0 serverCertResponseArray:(id *)a1 error:(id *)a2;
- (BOOL)challengeComponentsWith:(id)a0 challengeResponse:(id *)a1 error:(id *)a2;
- (BOOL)getStrongComponentsWithError:(id *)a0 resultobtained:(id *)a1;
- (void)issueClientCertificateWithCompletionOnQueue:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)sendCertIssueRequestWith:(id)a0 serverCertResponse:(id *)a1 error:(id *)a2;
- (BOOL)sendChallengeRequestWith:(id)a0 serverResponse:(id *)a1 error:(id *)a2;
- (BOOL)transformChallengeResponseWithError:(id *)a0 blockChallengeResponse:(id)a1 resultobtained:(id *)a2;
- (BOOL)transformStrongWithError:(id *)a0 blockComponents:(id)a1 resultobtained:(id *)a2;

@end
