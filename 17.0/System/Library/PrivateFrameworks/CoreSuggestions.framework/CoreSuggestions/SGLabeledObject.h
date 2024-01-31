@class NSString, SGExtractionInfo;

@interface SGLabeledObject : SGObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo;
@property (readonly, nonatomic) unsigned long long extractionType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 extractionInfo:(id)a1 recordId:(id)a2;
- (id)initWithLabel:(id)a0 extractionType:(unsigned long long)a1 recordId:(id)a2 origin:(id)a3;
- (BOOL)isEqualToLabeledObject:(id)a0;

@end
