@class NSArray, NSString;

@interface PFStoryConcreteRecipePresentation : NSObject <PFStoryRecipePresentation>

@property (readonly, copy, nonatomic) NSArray *clips;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long clipCount;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)clipAtIndex:(long long)a0;
- (id)initWithIdentifier:(id)a0 clips:(id)a1;
- (BOOL)isEqualToPresentation:(id)a0;

@end
