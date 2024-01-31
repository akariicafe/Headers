@class NSString, NSMutableArray, CKContextUserActivity;

@interface CKContextDonation : NSObject <NSSecureCoding> {
    _Atomic BOOL _donated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) CKContextUserActivity *associatedUserActivity;
@property unsigned long long remoteProcesses;
@property (nonatomic) unsigned long long nonce;
@property (readonly, nonatomic) NSString *donorBundleIdentifier;

+ (id)establishServiceConnection;

- (void)addItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)donate;
- (id)initWithDonorBundleIdentifier:(id)a0;
- (id)_concatenatedRequestTextUsingDebugText:(BOOL)a0;
- (id)concatenatedRequestsDebugText;
- (id)concatenatedRequestsText;
- (id)initWithDonations:(id)a0 donorBundleIdentifier:(id)a1;

@end
