@interface AVMetadataItemFilterForSharing : AVMetadataItemFilter

+ (void)addIdentifier:(id)a0 toWhitelistDictionary:(id)a1;
+ (void)addKeySpace:(id)a0 key:(id)a1 toWhitelistDictionary:(id)a2;

- (id)whitelist;

@end
