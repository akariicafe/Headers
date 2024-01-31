@class _MRNowPlayingPlayerPathProtobuf, MRClient, NSData, MROrigin, MRPlayer;

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) MRPlayerPath *anyPlayerPath;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (copy, nonatomic) MROrigin *origin;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;
@property (readonly, nonatomic) MRPlayerPath *localResolvedPlayerPath;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) MRPlayerPath *skeleton;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic, getter=isSystemMediaApplication) BOOL systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;
@property (readonly, nonatomic, getter=isSystemBooksApplication) BOOL systemBooksApplication;
@property (readonly, nonatomic, getter=isHomepodDemoApplication) BOOL homepodDemoApplication;

+ (id)localResolvedPlayerPathFromPlayerPath:(id)a0;
+ (id)localPlayerPath;

- (unsigned long long)hash;
- (id)playerPathByRedirectingToOrigin:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOrigin:(id)a0 client:(id)a1 player:(id)a2;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)playerPathByLocalizingWithOrigin:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
