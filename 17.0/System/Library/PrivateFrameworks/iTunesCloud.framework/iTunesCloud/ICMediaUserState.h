@class NSString, NSArray, ICMusicUserState, ICTVUserState, NSNumber;

@interface ICMediaUserState : NSObject <ICMutableMediaUserState, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *shortDebugName;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *iCloudPersonID;
@property (copy, nonatomic) NSArray *homeUserIDs;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL ageVerificationRequired;
@property (retain, nonatomic) ICMusicUserState *music;
@property (retain, nonatomic) ICTVUserState *tv;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly, copy, nonatomic) NSString *digest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
