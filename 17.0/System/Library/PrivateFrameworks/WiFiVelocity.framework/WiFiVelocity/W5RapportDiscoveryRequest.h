@class NSString, NSDictionary, NSOperationQueue, RPCompanionLinkClient, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface W5RapportDiscoveryRequest : NSObject <W5RapportRequestTaskCreation, W5RapportRequest> {
    RPCompanionLinkClient *_discoveryClient;
    NSMutableArray *_cachedPeerResult;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSOperationQueue *_operationQueue;
    unsigned long long _timeout;
}

@property (retain, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
