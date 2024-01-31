@class TSAWebVideoInfo, NSString;

@interface TSAWebVideoRep : TSDRep <TSDMediaControlsHostRep, TSDPlayableRep>

@property (readonly, nonatomic) TSAWebVideoInfo *webVideoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

@end
