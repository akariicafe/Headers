@class NSString, NSNumber;

@interface DADeviceStateRecord : NSObject

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *time;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithState:(id)a0 andTime:(id)a1;
- (id)stateTransitionAsString:(id)a0;
- (id)timeIntervelBetweenState:(id)a0;

@end
