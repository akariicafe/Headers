@class NSNumber;

@interface CallDBProperties : NSManagedObject

@property (retain, nonatomic) NSNumber *timer_outgoing;
@property (retain, nonatomic) NSNumber *timer_incoming;
@property (retain, nonatomic) NSNumber *timer_all;
@property (retain, nonatomic) NSNumber *timer_lifetime;
@property (retain, nonatomic) NSNumber *timer_last;

@end
