@class NSDate;

@interface BSRelativeDateTimerFireInfo : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned long long resolution;
@property (readonly, nonatomic) long long comparedToNow;
@property (readonly, copy, nonatomic) NSDate *fireDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(unsigned long long)a0 resolution:(unsigned long long)a1 comparedToNow:(long long)a2 fireDate:(id)a3;

@end
