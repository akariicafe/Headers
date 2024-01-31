@class NSString;
@protocol ICDeveloperTokenProvider;

@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding> {
    NSString *_cachedDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _storeRequestPersonalizationStyle;
@property (readonly, nonatomic) long long personalizationStyle;
@property (readonly, nonatomic) id<ICDeveloperTokenProvider> developerTokenProvider;
@property (readonly, nonatomic) long long personalizationMethod;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, copy, nonatomic) NSString *collectionPlaybackAuthorizationToken;

- (id)initWithBlock:(id /* block */)a0;
- (void)setPersonalizationStyle:(long long)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_description;
- (void)setDeveloperTokenProvider:(id)a0;
- (id)description;
- (void)setPlaybackAuthorizationToken:(id)a0;
- (void)setCollectionPlaybackAuthorizationToken:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setPersonalizationMethod:(long long)a0;
- (id)initWithCoder:(id)a0;

@end
