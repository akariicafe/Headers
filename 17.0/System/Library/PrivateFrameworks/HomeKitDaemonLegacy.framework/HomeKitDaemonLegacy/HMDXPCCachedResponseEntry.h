@class HMFTimer, HMReportContext, NSMutableArray, HMFMessageTransport;

@interface HMDXPCCachedResponseEntry : NSObject

@property (readonly, copy) HMReportContext *reportContext;
@property (readonly) NSMutableArray *messages;
@property (weak) HMFMessageTransport *transport;
@property (retain) HMFTimer *reportTimer;
@property (retain) HMFTimer *retrievalTimer;

- (void).cxx_destruct;
- (id)initWithReportContext:(id)a0 transport:(id)a1;

@end
