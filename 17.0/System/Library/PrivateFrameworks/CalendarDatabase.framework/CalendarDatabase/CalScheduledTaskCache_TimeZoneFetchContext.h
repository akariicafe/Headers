@class NSMutableDictionary, NSTimeZone;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject

@property (retain, nonatomic) NSTimeZone *previousTimeZone;
@property (retain, nonatomic) NSTimeZone *nextTimeZone;
@property (retain, nonatomic) NSMutableDictionary *dict;

- (void).cxx_destruct;

@end
