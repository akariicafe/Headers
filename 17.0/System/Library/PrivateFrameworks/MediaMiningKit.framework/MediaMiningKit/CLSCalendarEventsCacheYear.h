@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject

@property (nonatomic) long long year;
@property (readonly, nonatomic) NSMutableSet *months;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithYear:(long long)a0;

@end
