@class NSDictionary, NSString, NSNumber;

@interface AMSFamilyMember : NSObject

@property (nonatomic, getter=isCurrentSignedInUser) BOOL currentSignedInUser;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isAskToBuyEnabled) BOOL askToBuyEnabled;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSNumber *iCloudDSID;
@property (readonly, nonatomic) NSString *iCloudUsername;
@property (readonly, nonatomic) NSNumber *iTunesDSID;
@property (readonly, nonatomic) NSString *iTunesUsername;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isSharingPurchases) BOOL sharingPurchases;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
