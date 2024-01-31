@class CAContext;

@interface BLSHFlipbookContext : NSObject

@property (readonly, nonatomic) CAContext *caContext;
@property (readonly, nonatomic) BOOL wantsTransform;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;

- (unsigned long long)hash;
- (id)description;
- (id)initWithCAContext:(id)a0 wantsTransform:(BOOL)a1 inverted:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
