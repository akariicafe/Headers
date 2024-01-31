@class NSString, ICStoreArtworkInfo;

@interface ICMusicSocialProfile : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *socialProfileID;
@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isVerified;

+ (id)mediaAPIRequestURL;
+ (id)socialProfileInfoFromMediaAPIResponse:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaAPIResponse:(id)a0;

@end
