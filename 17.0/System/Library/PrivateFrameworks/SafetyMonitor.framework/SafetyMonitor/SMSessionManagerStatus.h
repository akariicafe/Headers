@class NSUUID, SMSessionManagerState, NSDate;

@interface SMSessionManagerStatus : NSObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *stateQueryDate;
@property (copy, nonatomic) NSUUID *lastSessionIDDuringMagnetBreak;
@property (copy, nonatomic) SMSessionManagerState *state;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 stateQueryDate:(id)a1 lastSessionIDDuringMagnetBreak:(id)a2 state:(id)a3;

@end
