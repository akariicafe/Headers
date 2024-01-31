@class NSUUID, NSString;

@interface SBSAElapsedTimerDescription : SBSATimerDescription <SBSAElapsedTimerDescribing>

@property (readonly, nonatomic, getter=isElapsed) BOOL elapsed;
@property (readonly, copy, nonatomic) NSUUID *timerDescriptionIdentifier;
@property (readonly, nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_equalsBuilder:(id)a0;
- (id)_hashBuilder;
- (id)_mutableDescriptionMissingEndAngleBracket;
- (id)initElapsedTimerDescriptionWithDescription:(id)a0;

@end
