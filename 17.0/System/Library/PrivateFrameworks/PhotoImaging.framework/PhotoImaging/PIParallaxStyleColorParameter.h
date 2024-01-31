@class NSNumber;

@interface PIParallaxStyleColorParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *redValue;
@property (readonly, nonatomic) NSNumber *greenValue;
@property (readonly, nonatomic) NSNumber *blueValue;
@property (readonly, nonatomic) NSNumber *alphaValue;

- (id)initWithRed:(id)a0 green:(id)a1 blue:(id)a2 alpha:(id)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
