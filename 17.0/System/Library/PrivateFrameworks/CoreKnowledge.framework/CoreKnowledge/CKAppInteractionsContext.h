@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    void /* unknown type, empty encoding */ numberOfDiscardedDonationsByIntentTypeAndBundleId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)updateDiscardedDonations:(double)a0 forIntentType:(id)a1 andBundleId:(id)a2;

@end
