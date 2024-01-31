@class UIColor;

@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying> {
    long long _dateIndex;
    UIColor *_color;
    long long _style;
}

+ (id)configurationWithDateIndex:(long long)a0 color:(id)a1 style:(long long)a2;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
