@class BTAirPodsControlServiceClient, NSObject;
@protocol OS_dispatch_source;

@interface BTAirPodsControlRequest : NSObject

@property (retain, nonatomic) BTAirPodsControlServiceClient *client;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ getHandler;
@property (copy, nonatomic) id /* block */ setHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;

@end
