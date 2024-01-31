@interface AMDService : NSObject

+ (id)sendReplyForBatchPEC:(id)a0 requestError:(id)a1 uuid:(id)a2 error:(id *)a3;
+ (id)sendReplyForBatchPIR:(id)a0 requestError:(id)a1 keywords:(id)a2 uuid:(id)a3 error:(id *)a4;
+ (id)sendReplyForPIRData:(id)a0 requestError:(id)a1 keyword:(id)a2 uuid:(id)a3 error:(id *)a4;

@end
