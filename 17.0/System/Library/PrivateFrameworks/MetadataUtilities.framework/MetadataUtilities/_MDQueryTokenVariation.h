@class NSString;

@interface _MDQueryTokenVariation : NSObject

@property (readonly, copy, nonatomic) NSString *variation;
@property (nonatomic) float confidence;
@property (nonatomic) long long type;

- (void)dealloc;
- (id)initWithVariation:(id)a0 type:(long long)a1 confidence:(float)a2;

@end
