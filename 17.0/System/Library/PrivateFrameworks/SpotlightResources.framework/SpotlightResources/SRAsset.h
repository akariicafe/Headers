@class NSString, NSArray, NSDictionary;

@interface SRAsset : NSObject {
    NSDictionary *_paths;
}

@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *contentNames;
@property (readonly, nonatomic) NSArray *contentPaths;

+ (id)assetWithLocaleIdentifier:(id)a0 contentType:(id)a1 path:(id)a2;
+ (id)assetWithLocaleIdentifier:(id)a0 contentType:(id)a1 resourceRoot:(id)a2 pathNames:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0 contentType:(id)a1 paths:(id)a2;
- (id)pathWithName:(id)a0;

@end
