@class MAAsset;

@interface DDSMAAsset : DDSAsset

@property (readonly, nonatomic) MAAsset *maAsset;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMAAsset:(id)a0;

@end
