@interface SelectedPhotoAttribute : NSObject

@property unsigned long long selectedAttribute;
@property float maxAttributeFreq;
@property float selectedTokenPercentage;

- (id)initWithZeros;

@end
