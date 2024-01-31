@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject

@property (nonatomic) long long month;
@property (readonly, nonatomic) NSMutableSet *days;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithMonth:(long long)a0;

@end
