@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, ANCompanionConnectionDelegate;

@interface ANCompanionConnection : NSObject

@property (readonly, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue;
@property (weak, nonatomic) id<ANCompanionConnectionDelegate> delegate;

- (id)init;
- (void)_registerForEvents;
- (void)_setupLink;
- (void)broadcastAnnouncementPlayed:(id)a0;
- (void)_tearDownLink;
- (void).cxx_destruct;

@end
