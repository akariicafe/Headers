@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying>

@property (readonly, nonatomic) int conditionType;
@property (readonly, nonatomic) double conditionValue;
@property (readonly, nonatomic) TSUCustomFormatData *data;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(int)a0 value:(double)a1 data:(id)a2;

@end
