@class NSSet, NSString;

@interface HMDModernTransportMessageContextOptionsBuilder : NSObject

@property (copy) NSSet *transports;
@property double timeoutOverride;
@property double timeToLive;
@property BOOL expectsMultipleResponses;
@property BOOL trackingDeviceReachability;
@property (copy) NSString *requestStartTimeHeaderKey;
@property (copy) NSString *timeToLiveHeaderKey;

- (void).cxx_destruct;

@end
