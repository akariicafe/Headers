@class NSString, NSNumber;

@interface SetCarRadioStationIntent : INIntent

@property (nonatomic, copy) NSString *channel;
@property (nonatomic, copy) NSString *callsign;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *frequency;
@property (nonatomic) long long band;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
