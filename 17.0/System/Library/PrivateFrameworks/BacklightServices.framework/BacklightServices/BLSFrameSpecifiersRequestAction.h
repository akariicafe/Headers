@class NSDate, NSDateInterval;

@interface BLSFrameSpecifiersRequestAction : BSAction

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *previousPresentationDate;
@property (readonly, nonatomic) BOOL shouldReset;

- (id)initWithDateInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 completion:(id /* block */)a3;

@end
