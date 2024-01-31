@class NSMutableArray;

@interface TRIPBMethodOptions : TRIPBMessage

@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) int idempotencyLevel;
@property (nonatomic) BOOL hasIdempotencyLevel;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
