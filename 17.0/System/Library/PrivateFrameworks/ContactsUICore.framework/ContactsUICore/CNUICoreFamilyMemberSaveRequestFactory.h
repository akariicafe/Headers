@interface CNUICoreFamilyMemberSaveRequestFactory : NSObject

+ (id)distinctCopiesOfContacts:(id)a0;
+ (id)saveRequestToUpdateContactListByAddingContacts:(id)a0;
+ (id)saveRequestToUpdateContactListByAddingContacts:(id)a0 toContainer:(id)a1;
+ (id)saveRequestToUpdateContactListByRemovingContacts:(id)a0;
+ (id)saveRequestToUpdateContactListByUpdatingContacts:(id)a0;
+ (id)saveRequestToUpdateContactWhitelistByRemovingContacts:(id)a0;
+ (id)saveRequestToupdateContactWhitelistByAddingContacts:(id)a0;

@end
