@class HVQueues, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface HVDonationReceiver : NSObject {
    HVQueues *_queues;
    NSObject<OS_dispatch_queue> *_biomeSubQueue;
    BMBiomeScheduler *_biomeScheduler;
    BPSSink *_biomeSink;
}

+ (id)defaultReceiver;

- (id)init;
- (BOOL)donateUserAction:(id)a0 searchableItem:(id)a1 error:(id *)a2;
- (BOOL)donateSearchableItems:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (BOOL)donateInteractions:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)_setUpUserActivityDonations;
- (id)initWithQueues:(id)a0;

@end
