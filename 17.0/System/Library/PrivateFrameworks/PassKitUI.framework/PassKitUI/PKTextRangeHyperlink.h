@class NSString;

@interface PKTextRangeHyperlink : NSObject

@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, copy, nonatomic) id /* block */ action;

+ (id)hyperlinkSourcesFromApplyFooter:(id)a0 linkTapped:(id /* block */)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLinkText:(id)a0 action:(id /* block */)a1;

@end
