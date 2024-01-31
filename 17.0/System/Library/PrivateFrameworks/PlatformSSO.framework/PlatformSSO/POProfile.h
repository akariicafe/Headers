@class SOFullProfile, NSString, NSArray, NSDictionary, NSNumber;

@interface POProfile : NSObject

@property (copy, nonatomic) SOFullProfile *profile;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSArray *URLPrefix;
@property (readonly, copy, nonatomic) NSDictionary *extensionData;
@property (readonly, nonatomic) NSString *registrationToken;
@property (readonly) int authenticationMethod;
@property BOOL useSharedDeviceKeys;
@property (readonly, nonatomic) NSString *accountDisplayName;
@property (retain, nonatomic) NSNumber *loginFrequency;
@property BOOL createUsersEnabled;
@property BOOL authorizationEnabled;
@property (readonly, nonatomic) NSDictionary *tokenToUserMapping;
@property (readonly) long long newUserAuthorizationMode;
@property (readonly) long long userAuthorizationMode;
@property (readonly, nonatomic) NSArray *administratorGroups;
@property (readonly, nonatomic) NSArray *otherGroups;
@property (readonly, nonatomic) NSDictionary *authorizationGroups;

- (id)init;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;

@end
