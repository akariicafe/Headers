@class NSDateComponents;

@interface VCSDate : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDateComponents *components;
@property (readonly, nonatomic) BOOL floating;
@property (readonly, nonatomic) BOOL dateOnly;

+ (id)dateListFromData:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nsDateWithLocalTimeZone:(id)a0;
- (id)dateForEndOfDay;
- (id)dateByAddingDays:(long long)a0;
- (id)dateWithTimeComponentsFromDate:(id)a0;
- (id)initWithDateComponents:(id)a0 floating:(BOOL)a1 dateOnly:(BOOL)a2;
- (id)initWithDateString:(const char *)a0;
- (id)initWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 floating:(BOOL)a6 dateOnly:(BOOL)a7;

@end
