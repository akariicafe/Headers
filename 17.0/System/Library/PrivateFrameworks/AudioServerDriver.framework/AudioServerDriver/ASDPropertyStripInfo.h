@class NSString, NSDictionary;

@interface ASDPropertyStripInfo : ASDDSPItemInfo

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSDictionary *value;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
