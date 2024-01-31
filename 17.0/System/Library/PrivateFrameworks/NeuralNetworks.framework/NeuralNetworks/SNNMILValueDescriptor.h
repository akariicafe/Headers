@class NSString, NSArray;

@interface SNNMILValueDescriptor : SNNMILValue

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *dimensions;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) BOOL isScalar;

- (void).cxx_destruct;
- (id)initWithShape:(id)a0 dataType:(unsigned long long)a1;
- (id)initWithShape:(id)a0 dataType:(unsigned long long)a1 name:(id)a2;

@end
