@class NSArray;

@interface CKInlineReplyTransitionProperties : NSObject

@property (nonatomic) double initialBalloonOffsetX;
@property (retain, nonatomic) NSArray *chatItemGUIDs;
@property (retain, nonatomic) NSArray *associatedChatItemGUIDs;
@property (nonatomic) struct CGPoint { double x; double y; } swipeVelocity;

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
