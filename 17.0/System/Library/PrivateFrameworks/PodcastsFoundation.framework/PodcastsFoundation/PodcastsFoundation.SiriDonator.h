@interface PodcastsFoundation.SiriDonator : NSObject {
    void /* unknown type, empty encoding */ accountController;
    void /* unknown type, empty encoding */ mediaRequestController;
    void /* unknown type, empty encoding */ backgroundTaskManager;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ _donationInProgress;
    void /* unknown type, empty encoding */ podcastsUpdateSubscription;
    void /* unknown type, empty encoding */ _throttleInterval;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountController:(id)a0 backgroundTaskManager:(id)a1;
- (void)startDonation;

@end
