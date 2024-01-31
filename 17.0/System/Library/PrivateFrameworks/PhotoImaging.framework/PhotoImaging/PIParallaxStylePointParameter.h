@class NSNumber, NSString;

@interface PIParallaxStylePointParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) NSString *unit;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id)initWithX:(id)a0 Y:(id)a1;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithX:(id)a0 Y:(id)a1 unit:(id)a2;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
