@class NTKArgonKeyDescriptor;

@interface NTKArgonExtractorOperation : NSObject

@property (readonly, nonatomic) NTKArgonKeyDescriptor *keyDescriptor;
@property (readonly, nonatomic) long long operationType;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyDescriptor:(id)a0 operationType:(long long)a1;

@end
