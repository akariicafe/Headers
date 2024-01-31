@class BLSBacklightSceneVisualState, NSDate;

@interface BLSHEnvironmentTransitionStateTarget : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_performedBacklightRamp;
}

@property (readonly, nonatomic) unsigned long long sequenceID;
@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState;
@property (readonly, nonatomic) NSDate *presentationDate;
@property long long backlightState;
@property BOOL didUpdateInitialState;
@property BOOL didCompleteAnimation;

- (unsigned long long)hash;
- (id)initWithSequenceID:(unsigned long long)a0 backlightState:(long long)a1;
- (id)description;
- (BOOL)isEqualToVisualState:(id)a0 presentationDate:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 visualState:(id)a1 presentationDate:(id)a2;
- (BOOL)setAndTestDidPerformBacklightRamp;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithSequenceID:(unsigned long long)a0 backlightState:(long long)a1 visualState:(id)a2 presentationDate:(id)a3;

@end
