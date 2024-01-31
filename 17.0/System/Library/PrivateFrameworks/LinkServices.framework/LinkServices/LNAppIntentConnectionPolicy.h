@class NSString, LNEffectiveBundleIdentifier, LNActionMetadata;

@interface LNAppIntentConnectionPolicy : NSObject <NSCopying> {
    LNActionMetadata *_metadata;
}

@property (readonly, nonatomic) long long bundleMetadataVersion;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *appIntentIdentifier;
@property (readonly, nonatomic) NSString *appIntentMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL openAppWhenRun;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionWithParameters:(id)a0;
- (id)connectionWithError:(id *)a0;
- (id)initWithAppIntentMetadata:(id)a0 effectiveBundleIdentifier:(id)a1 appBundleIdentifier:(id)a2;

@end
