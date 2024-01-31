@class NSString, NSDictionary;

@interface SNAUStripInfo : SNDSPItemInfo {
    NSString *_path;
    NSDictionary *_value;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
