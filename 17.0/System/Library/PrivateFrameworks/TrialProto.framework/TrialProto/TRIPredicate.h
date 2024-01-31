@class NSMutableArray;

@interface TRIPredicate : TRIPBMessage

@property (nonatomic) int systemVariable;
@property (nonatomic) BOOL hasSystemVariable;
@property (nonatomic) int operation;
@property (nonatomic) BOOL hasOperation;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) unsigned long long operandArray_Count;

+ (id)descriptor;

@end
