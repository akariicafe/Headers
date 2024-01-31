@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo {
    NSString *_path;
    NSString *_resourcePath;
    NSDictionary *_value;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
