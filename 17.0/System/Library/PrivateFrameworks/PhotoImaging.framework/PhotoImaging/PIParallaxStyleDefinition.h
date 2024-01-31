@class NSString;

@interface PIParallaxStyleDefinition : NSObject

@property (readonly, nonatomic) NSString *type;

- (BOOL)isEqual:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleDefinition:(id)a0;

@end
