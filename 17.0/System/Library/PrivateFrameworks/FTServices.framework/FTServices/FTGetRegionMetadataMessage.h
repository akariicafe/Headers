@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (BOOL)wantsBinaryPush;
- (id)init;
- (long long)command;
- (long long)responseCommand;
- (id)bagKey;
- (void).cxx_destruct;
- (id)messageBody;
- (BOOL)wantsCompressedBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
