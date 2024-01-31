@class NSString, GKPlayerInternal;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) GKPlayerInternal *playerInternal;
@property (copy, nonatomic) NSString *gameBundleID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL friendsOnly;
@property (nonatomic) long long timeScope;
@property (nonatomic, getter=isPrefetch) BOOL prefetch;

+ (id)requestForPlayerInternals:(id)a0;
+ (id)requestForRankRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
