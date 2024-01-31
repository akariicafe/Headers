@class MPModelGenericObject;

@interface MPCSharedListeningPlaybackEvent : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) MPModelGenericObject *item;

- (id)description;
- (void).cxx_destruct;
- (id)initWithKind:(long long)a0;
- (id)initWithKind:(long long)a0 item:(id)a1;

@end
