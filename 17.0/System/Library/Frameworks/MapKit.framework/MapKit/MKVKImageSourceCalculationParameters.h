@class NSArray;

@interface MKVKImageSourceCalculationParameters : NSObject

@property (readonly, copy, nonatomic) NSArray *imageSourceKeys;
@property (readonly, nonatomic) double scale;

- (void).cxx_destruct;
- (id)initWithImageSourceKeys:(id)a0 scale:(double)a1;

@end
