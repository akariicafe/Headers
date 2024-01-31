@class NSString;

@interface PIParallaxStyleParameter : NSObject

@property (readonly, nonatomic) NSString *type;

- (BOOL)isEqual:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
