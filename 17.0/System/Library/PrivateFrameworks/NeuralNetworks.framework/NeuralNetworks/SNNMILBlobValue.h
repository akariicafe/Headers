@class NSString, NSArray, NSNumber;

@interface SNNMILBlobValue : SNNMILValue <SNNMILValueRepresentable>

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) NSNumber *offset;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 offset:(id)a3;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })milValueWithContext:(id)a0;

@end
