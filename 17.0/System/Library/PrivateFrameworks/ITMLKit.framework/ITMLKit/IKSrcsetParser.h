@class NSURL, NSArray;

@interface IKSrcsetParser : NSObject {
    NSArray *_srcsetRules;
}

@property (readonly, nonatomic) NSURL *resolvedURL;

- (void).cxx_destruct;
- (id)initWithSrcsetStr:(id)a0 defaultStr:(id)a1;

@end
