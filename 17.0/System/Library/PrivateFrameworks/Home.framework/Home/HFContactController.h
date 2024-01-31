@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol HFContactControllerDelegate;

@interface HFContactController : NSObject

@property (retain, nonatomic) NSMutableDictionary *recipientAvailabilities;
@property (nonatomic) unsigned long long familyMembersState;
@property (copy, nonatomic) NSArray *familyMembers;
@property (copy, nonatomic) NSDictionary *familyMemberDsidToContact;
@property (copy, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSMutableArray *familyMemberCallbacks;
@property (weak, nonatomic) id<HFContactControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *pendingDestinations;

+ (id)contactForAppleID:(id)a0 keyDescriptors:(id)a1;
+ (id)contactForEmailAddress:(id)a0 keyDescriptors:(id)a1;
+ (id)contactForPhoneNumber:(id)a0 keyDescriptors:(id)a1;
+ (id)stringForRecipientStatus:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)contactForFamilyMemberWithDsid:(id)a0;
- (void)entriesUpdated:(id)a0;
- (void)fetchFamilyMembersWithCompletion:(id /* block */)a0;
- (id)initWithKeyDescriptors:(id)a0;
- (void)markDestinationsPending:(id)a0;
- (unsigned long long)statusForDestination:(id)a0;
- (id)_contactForFamilyMember:(id)a0;
- (void)_downloadFamilyMemberPhotos;
- (void)_loadFamilyMembersWithCompletion:(id /* block */)a0;

@end
