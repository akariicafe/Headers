@class NSNumber, NSString, ACAccount;
@protocol _TtP12FamilyCircle15FARequestSigner_;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (retain, nonatomic) id<_TtP12FamilyCircle15FARequestSigner_> ephemeralAuthSigner;
@property (copy, nonatomic) NSNumber *familyMemberDSID;
@property (copy, nonatomic) NSString *familyMemberAltDSID;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *serverCacheTag;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)fa_photoRequestBaseURLString;
- (id)initWithMemberAltDSID:(id)a0 accountStore:(id)a1;
- (id)initWithMemberAltDSID:(id)a0 ephemeralAuthResults:(id)a1;
- (id)initWithMemberAltDSID:(id)a0 ephemeralAuthSigner:(id)a1;
- (id)initWithMemberDSID:(id)a0 accountStore:(id)a1;

@end
