@class NSString;

@interface CSContactsWrapper : NSObject

@property (class, readonly, nonatomic) Class CNContactClass;
@property (class, readonly, nonatomic) Class CNContactFetchRequestClass;
@property (class, readonly, nonatomic) Class CNContactFormatterClass;
@property (class, readonly, nonatomic) Class CNContactStoreClass;
@property (class, readonly, nonatomic) id CNContactNicknameKey;

@property (readonly, nonatomic) Class CNContactPropertyClass;
@property (readonly, nonatomic) NSString *CNContactEmailAddressesKeyString;

+ (id)sharedInstance;

@end
