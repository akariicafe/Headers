@class VCPMADResource;

@interface VCPMADResourceEntry : NSObject

@property (retain, nonatomic) VCPMADResource *resource;
@property (nonatomic) long long activeCount;
@property (nonatomic) long long currentCost;

- (id)initWithResource:(id)a0;
- (void).cxx_destruct;

@end
