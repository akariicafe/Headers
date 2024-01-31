@class NSString;

@interface TUConversationActivitySceneAssociationBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationActivitySceneAssociationBehavior *defaultBehavior;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly, nonatomic) BOOL shouldAssociateScene;
@property (readonly, copy, nonatomic) NSString *preferredSceneSessionRole;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTargetContentIdentifier:(id)a0 shouldAssociateScene:(BOOL)a1 preferredSceneSessionRole:(id)a2;
- (BOOL)isEquivalentToSceneAssociationBehavior:(id)a0;

@end
