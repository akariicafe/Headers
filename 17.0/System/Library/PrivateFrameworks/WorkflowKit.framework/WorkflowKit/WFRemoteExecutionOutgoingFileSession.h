@class NSURL, NSString;

@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *transferIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;

+ (long long)version;
+ (BOOL)supportsVersion:(long long)a0;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)fileSentWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithService:(id)a0 fileURL:(id)a1 transferIdentifier:(id)a2 requestIdentifier:(id)a3;
- (BOOL)sendToDestinations:(id)a0 options:(id)a1 error:(id *)a2;

@end
