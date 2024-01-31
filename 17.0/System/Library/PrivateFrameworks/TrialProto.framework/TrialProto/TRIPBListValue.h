@class NSMutableArray;

@interface TRIPBListValue : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *valuesArray;
@property (readonly, nonatomic) unsigned long long valuesArray_Count;

+ (id)descriptor;

@end
