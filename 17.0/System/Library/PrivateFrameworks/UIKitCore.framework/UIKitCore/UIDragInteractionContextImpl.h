@class UITouch, NSArray, NSString, NSMutableArray;

@interface UIDragInteractionContextImpl : NSObject <UIDragInteractionContext, UIDragAnimating>

@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldAnimateLift;
@property (copy, nonatomic) id /* block */ animations;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ _sessionDidBegin;
@property (nonatomic) struct CGPoint { double x; double y; } initialLocation;
@property (nonatomic, getter=isPreparedForLift) BOOL preparedForLift;
@property (nonatomic) long long invocationType;
@property (retain, nonatomic) UITouch *initiationTouch;
@property (nonatomic) BOOL hasBegunDrag;
@property (readonly, nonatomic) NSMutableArray *animationBlocks;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
