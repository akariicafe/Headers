@class NSString;

@interface _UIDebugLogNodeTreeStyle : NSObject

@property (readonly, nonatomic) NSString *node;
@property (readonly, nonatomic) NSString *lastNode;
@property (readonly, nonatomic) NSString *intermediate;
@property (readonly, nonatomic) NSString *trailing;

+ (id)defaultStyle;
+ (id)styleWithNode:(id)a0 lastNode:(id)a1 intermediate:(id)a2 trailing:(id)a3;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0 lastNode:(id)a1 intermediate:(id)a2 trailing:(id)a3;

@end
