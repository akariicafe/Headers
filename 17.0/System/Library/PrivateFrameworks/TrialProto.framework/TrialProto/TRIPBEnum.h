@class NSString, NSMutableArray, TRIPBSourceContext;

@interface TRIPBEnum : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *enumvalueArray;
@property (readonly, nonatomic) unsigned long long enumvalueArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) BOOL hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
