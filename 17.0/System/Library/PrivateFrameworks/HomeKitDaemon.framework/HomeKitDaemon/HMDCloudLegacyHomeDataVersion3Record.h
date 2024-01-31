@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord

+ (id)legacyModelWithHomeDataV3:(id)a0;

- (id)recordType;
- (void)clearData;
- (void)setData:(id)a0;
- (id)data;
- (BOOL)encodeObjectChange:(id)a0;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;

@end
