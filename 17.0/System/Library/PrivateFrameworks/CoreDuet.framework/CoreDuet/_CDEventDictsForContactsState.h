@class CNContact, NSArray, CHManager, NSSet, NSNumber, NSDictionary;

@interface _CDEventDictsForContactsState : NSObject {
    CHManager *_mngr;
    CNContact *_me;
    NSArray *_relationshipContacts;
    NSNumber *_avgOfAllCalls;
    NSArray *_emergencyFamilyContacts;
    NSArray *_emergencyContacts;
    NSArray *_contactParents;
    NSSet *_photosContactIds;
    NSDictionary *_fmfContactsFollowingMyLocation;
    NSDictionary *_fmfContactsSharingLocationsWithMe;
    NSDictionary *_airDropDict;
    NSDictionary *_airDropDictAtHome;
    NSArray *_homeContacts;
}

- (id)init;
- (void).cxx_destruct;

@end
