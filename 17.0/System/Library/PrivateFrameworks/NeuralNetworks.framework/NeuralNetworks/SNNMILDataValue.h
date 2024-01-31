@class NSData, NSArray, NSString;

@interface SNNMILDataValue : SNNMILValue <SNNMILValueRepresentable>

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) void *bytes;
@property (readonly, nonatomic) unsigned long long byteCount;
@property (readonly, nonatomic) BOOL isScalar;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long scalarCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0 scalars:(id)a1 dataType:(unsigned long long)a2;
- (id)initWithScalar:(id)a0 dataType:(unsigned long long)a1;
- (id)initWithShape:(id)a0 bytes:(const void *)a1 dataType:(unsigned long long)a2;
- (id)initWithShape:(id)a0 bytesNoCopy:(void *)a1 dataType:(unsigned long long)a2;
- (id)initWithStringScalar:(id)a0;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueWithContext:(id)a0;

@end
