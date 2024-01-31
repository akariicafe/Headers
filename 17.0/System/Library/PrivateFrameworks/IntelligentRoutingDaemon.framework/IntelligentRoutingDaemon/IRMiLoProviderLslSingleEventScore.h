@class NSUUID, NSNumber;

@interface IRMiLoProviderLslSingleEventScore : NSObject

@property (retain, nonatomic) NSUUID *eventId;
@property (retain, nonatomic) NSNumber *score;

- (void).cxx_destruct;
- (id)initWithMiloPlace:(id)a0;

@end
