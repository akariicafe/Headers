@class ICMusicSocialProfile, NSString, NSArray, ICStoreArtworkInfo;

@interface ICMusicUserProfile : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *socialProfileID;
@property (readonly, nonatomic) NSArray *acceptedTerms;
@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, nonatomic) ICMusicSocialProfile *socialProfile;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isDiscoverableByContact;
@property (readonly, nonatomic) BOOL isContactCheckAllowed;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) BOOL isOnboarded;
@property (readonly, nonatomic) BOOL collaborationAllowed;
@property (readonly, nonatomic) BOOL displayNameAccepted;

+ (id)attributesInfoFromMediaAPIResponse:(id)a0;
+ (id)mediaAPIRequestURL;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_capabilityForKey:(id)a0 fromAttributes:(id)a1;
- (id)initWithMediaAPIResponse:(id)a0;
- (void)setSocialProfile:(id)a0;

@end
