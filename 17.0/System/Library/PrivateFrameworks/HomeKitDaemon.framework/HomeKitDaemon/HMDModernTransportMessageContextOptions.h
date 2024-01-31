@class NSSet, NSString;

@interface HMDModernTransportMessageContextOptions : NSObject

@property (readonly) NSSet *transports;
@property (readonly) double timeoutOverride;
@property (readonly) double timeToLive;
@property (readonly) BOOL expectsMultipleResponses;
@property (readonly, getter=isTrackingDeviceReachability) BOOL trackingDeviceReachability;
@property (readonly) NSString *requestStartTimeHeaderKey;
@property (readonly) NSString *timeToLiveHeaderKey;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id)a0;
- (void).cxx_destruct;

@end
