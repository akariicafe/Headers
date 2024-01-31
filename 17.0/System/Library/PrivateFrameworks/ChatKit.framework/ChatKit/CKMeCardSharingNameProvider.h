@class NSString;

@interface CKMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider>

@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSString *nickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameContactForPrimaryAccount;
+ (id)nameProviderForAccount:(id)a0;
+ (id)nameProviderForContact:(id)a0;
+ (id)nameProviderForNickname:(id)a0;
+ (id)nameProviderForPrimaryAccount;

- (void).cxx_destruct;

@end
