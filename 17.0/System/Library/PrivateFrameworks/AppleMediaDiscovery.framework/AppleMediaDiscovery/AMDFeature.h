@class NSArray, NSMutableArray;
@protocol PostRemapOperation;

@interface AMDFeature : NSObject

@property (retain, nonatomic) id _value;
@property (nonatomic) long long _dataType;
@property (retain, nonatomic) id _remapInfo;
@property (retain, nonatomic) id<PostRemapOperation> _postRemapOperation;
@property (retain, nonatomic) NSArray *_shape;
@property (retain, nonatomic) NSMutableArray *_actualShape;

+ (void)copyDoubleValues:(int)a0 fromArray:(id)a1 toBuffer:(double *)a2 withDefaultValue:(double)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
+ (void)copyFloat32Values:(int)a0 fromArray:(id)a1 toBuffer:(float *)a2 withDefaultValue:(float)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
+ (void)copyInt32Values:(int)a0 fromArray:(id)a1 toBuffer:(int *)a2 withDefaultValue:(int)a3 withRemapData:(id)a4 andPostRemapOperation:(id)a5;
+ (void)copyInt32Values:(int)a0 fromArray:(id)a1 toBuffer:(int *)a2 withDefaultValue:(int)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
+ (void)copyInt32Values:(int)a0 fromArray:(id)a1 toBuffer:(int *)a2 withDefaultValue:(int)a3 withRemapInfo:(id)a4 andPostRemapOperation:(id)a5;
+ (id)featureFromValue:(id)a0;
+ (BOOL)getDoubleFromObject:(id)a0 copyToValue:(double *)a1 withRemapDictionary:(id)a2 andPostRemapOperation:(id)a3;
+ (BOOL)getFloatFromObject:(id)a0 copyToValue:(float *)a1 withRemapDictionary:(id)a2 andPostRemapOperation:(id)a3;
+ (BOOL)getIntFromObject:(id)a0 copyToValue:(int *)a1 withRemapDictionary:(id)a2 andPostRemapOperation:(id)a3;

- (id)stringValue;
- (id)initWithValue:(id)a0;
- (void)setShape:(id)a0;
- (void)setDataType:(long long)a0;
- (void).cxx_destruct;
- (id)getValue;
- (id)getShape;
- (unsigned long long)getCount;
- (void)copyDoubleValues:(int)a0 toBuffer:(double *)a1 withDefaultValue:(double)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
- (void)copyFloat32Values:(int)a0 toBuffer:(float *)a1 withDefaultValue:(float)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
- (void)copyInt32Values:(int)a0 toBuffer:(int *)a1 withDefaultValue:(int)a2 withMapOp:(id)a3 withRemapDictionary:(id)a4 andPostRemapOperation:(id)a5;
- (void)copyInt32Values:(int)a0 toBuffer:(int *)a1 withDefaultValue:(int)a2 withMapOp:(id)a3 withRemapInfo:(id)a4 andPostRemapOperation:(id)a5;
- (long long)getDataType;
- (id)getPostRemapOperation;
- (id)getRemapInfo;
- (void)setPostRemapOperation:(id)a0;
- (void)setRemapInfo:(id)a0;

@end
