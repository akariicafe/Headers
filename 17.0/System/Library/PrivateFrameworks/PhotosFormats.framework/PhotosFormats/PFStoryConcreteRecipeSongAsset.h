@class NSString, NSURL;

@interface PFStoryConcreteRecipeSongAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeMutableSongAsset>

@property (retain, nonatomic) NSString *colorGradeCategory;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) long long subcategory;
@property (readonly, nonatomic) NSString *catalog;
@property (readonly, nonatomic) NSString *songID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *diagnosticDescription;

+ (id)URLWithCatalog:(id)a0 songID:(id)a1;
+ (BOOL)decomposeURL:(id)a0 usingBlock:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAsset:(id)a0;
- (id)initWithIdentifier:(id)a0 category:(long long)a1 subcategory:(long long)a2 catalog:(id)a3 songID:(id)a4 title:(id)a5 subtitle:(id)a6;
- (id)initWithIdentifier:(id)a0 kind:(long long)a1 url:(id)a2;

@end
