@class NSMutableSet;

@interface CLSCalendarEventsCacheDay : NSObject

@property (nonatomic) long long day;
@property (readonly, nonatomic) NSMutableSet *events;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithDay:(long long)a0;

@end
