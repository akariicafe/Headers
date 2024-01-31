@class PRSServerPosterIdentity, NSString, NSUUID, NSDictionary;
@protocol PBFStateComponentDelegate;

@interface PBFApplicationStateComponent : NSObject {
    unsigned long long _cachedHash;
    NSString *_cachedDescription;
}

@property (retain) NSString *identifier;
@property (readonly) NSUUID *posterUUID;
@property (weak, nonatomic) id<PBFStateComponentDelegate> delegate;
@property (copy) NSDictionary *userInfo;
@property (readonly, nonatomic) PRSServerPosterIdentity *identity;

- (id)initWithPath:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 userInfo:(id)a1;
- (id)initWithPRSPosterConfiguration:(id)a0;
- (id)initWithPRPosterConfiguration:(id)a0;
- (id)initWithPRPosterDescriptor:(id)a0;
- (id)initWithServerIdentity:(id)a0;

@end
