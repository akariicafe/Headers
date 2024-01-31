@class NSString, NSMutableArray;

@interface TRICustomPredicate : TRIPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) int keyType;
@property (nonatomic) BOOL hasKeyType;
@property (nonatomic) int operation;
@property (nonatomic) BOOL hasOperation;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) unsigned long long operandArray_Count;

+ (id)descriptor;

@end
