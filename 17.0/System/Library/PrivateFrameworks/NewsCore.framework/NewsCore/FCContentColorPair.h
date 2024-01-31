@class FCColor;

@interface FCContentColorPair : NSObject

@property (readonly, copy, nonatomic) FCColor *lightColor;
@property (readonly, copy, nonatomic) FCColor *darkColor;

+ (id)colorPairWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1;

@end
