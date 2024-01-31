@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject

@property (readonly, nonatomic) unsigned long long blockRow;
@property (readonly, nonatomic) HMBProcessingOptions *options;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBlockRow:(unsigned long long)a0 options:(id)a1;

@end
