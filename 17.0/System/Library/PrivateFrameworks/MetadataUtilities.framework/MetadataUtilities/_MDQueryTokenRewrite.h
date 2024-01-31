@class NSString, NSArray;

@interface _MDQueryTokenRewrite : NSObject

@property (copy, nonatomic) NSString *originalToken;
@property (readonly, copy, nonatomic) NSArray *variations;

- (void)dealloc;
- (id)initWithOriginalToken:(id)a0 variations:(id)a1;

@end
