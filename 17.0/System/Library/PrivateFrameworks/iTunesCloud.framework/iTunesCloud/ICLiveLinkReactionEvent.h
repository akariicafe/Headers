@class NSString;

@interface ICLiveLinkReactionEvent : NSObject

@property (readonly, copy, nonatomic) NSString *reactionIdentifier;
@property (readonly, copy, nonatomic) NSString *reaction;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithReaction:(id)a0 reactionIdentifier:(id)a1 itemIdentifier:(id)a2;

@end
