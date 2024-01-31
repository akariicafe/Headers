@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo {
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
