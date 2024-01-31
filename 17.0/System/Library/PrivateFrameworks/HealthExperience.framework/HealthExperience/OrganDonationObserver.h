@protocol OrganDonationObserverDelegate;

@interface OrganDonationObserver : NSObject {
    int _organDonationChangedToken;
}

@property (weak, nonatomic) id<OrganDonationObserverDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startObservingChanges;

@end
