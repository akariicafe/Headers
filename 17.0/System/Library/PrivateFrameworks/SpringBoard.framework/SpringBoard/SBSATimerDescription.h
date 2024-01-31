@class NSUUID, NSString;

@interface SBSATimerDescription : NSObject <SBSATimerDescribing>

@property (readonly, copy, nonatomic) NSUUID *timerDescriptionIdentifier;
@property (readonly, nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTimeInterval:(double)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_equalsBuilder:(id)a0;
- (id)_hashBuilder;
- (id)_initWithIdentifier:(id)a0 timeInterval:(double)a1;
- (id)_mutableDescriptionMissingClosingAngleBracket;

@end
