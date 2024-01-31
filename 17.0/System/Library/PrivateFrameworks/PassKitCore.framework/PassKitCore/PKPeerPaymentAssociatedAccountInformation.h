@class NSSet, NSDate;

@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *associatedAccounts;
@property (copy, nonatomic) NSSet *associatedAccountInvitations;
@property (copy, nonatomic) NSSet *associatedAccountRemovalRecords;
@property (nonatomic) double proactiveAssociatedAccountFetchPeriod;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic, getter=isAssociatedAccountStateDirty) BOOL associatedAccountStateDirty;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 lastUpdated:(id)a1;
- (void)enumerateAccountInvitationsUsingBlock:(id /* block */)a0;
- (void)enumerateAssociatedAccountsUsingBlock:(id /* block */)a0;
- (void)markAssociatedAccountActiveWithAltDSID:(id)a0 hasPresentedNotification:(BOOL)a1;
- (void)markAssociatedAccountRemovalRecordWithAltDSID:(id)a0 hasPresentedNotification:(BOOL)a1;

@end
