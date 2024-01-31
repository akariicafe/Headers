@class NSString, NSURL;

@interface SSLocalWebResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *siteName;
@property (retain, nonatomic) NSURL *url;

+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithUrl:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;

@end
