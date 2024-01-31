@class NSString, NSURL;

@interface PFStoryConcreteRecipeDisplayAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeDisplayAsset>

@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *diagnosticDescription;

+ (id)URLWithScheme:(id)a0 cloudIdentifier:(id)a1;
+ (BOOL)decomposeURL:(id)a0 usingBlock:(id /* block */)a1;

@end
