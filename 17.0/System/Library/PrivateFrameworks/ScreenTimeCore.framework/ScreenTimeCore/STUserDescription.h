@class NSString, NSNumber;

@interface STUserDescription : NSObject

@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy, nonatomic) NSNumber *userDSID;
@property (readonly, copy, nonatomic) NSString *userAltDSID;

+ (id)currentUser;
+ (void)currentUserWithCompletion:(id /* block */)a0;

- (id)initWithGivenName:(id)a0 familyName:(id)a1 userDSID:(id)a2 userAltDSID:(id)a3;
- (void).cxx_destruct;

@end
