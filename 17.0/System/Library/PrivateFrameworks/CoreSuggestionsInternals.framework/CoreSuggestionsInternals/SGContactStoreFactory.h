@interface SGContactStoreFactory : NSObject

+ (void)useMockContactStore:(id)a0;
+ (id)contactStoreWithDonatedContacts;
+ (id)contactStore;

@end
