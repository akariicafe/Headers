@class HMDDataStreamBulkSendProtocol, NSDictionary, NSError, NSMutableArray;

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate>

@property (readonly, weak, nonatomic) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (readonly, nonatomic) NSDictionary *requestHeader;
@property (retain, nonatomic) NSMutableArray *pendingReads;
@property (retain, nonatomic) NSError *receivedFailure;
@property (readonly, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (void)acceptBulkSendSessionOnQueue:(id)a0 callback:(id /* block */)a1;
- (id)initWithProtocol:(id)a0 requestHeader:(id)a1 metadata:(id)a2;
- (void)rejectBulkSendSessionWithStatus:(unsigned short)a0;

@end
