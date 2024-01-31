@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (nonatomic) long long layoutRole;
@property (nonatomic, getter=sb_isTransitioning, setter=sb_setTransitioning:) BOOL sb_transitioning;
@property (nonatomic, getter=sb_isStashedPIP, setter=sb_setStashedPIP:) BOOL sb_stashedPIP;
@property (readonly, nonatomic, getter=isSpringBoardElement) BOOL springBoardElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 layoutRole:(long long)a1;

@end
