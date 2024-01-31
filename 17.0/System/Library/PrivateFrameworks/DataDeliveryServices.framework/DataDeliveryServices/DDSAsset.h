@class NSString, NSDictionary, NSURL;

@interface DDSAsset : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, nonatomic) NSString *debuggingID;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) unsigned long long assetState;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *installDate;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)debuggingIDsForAssets:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttributes:(id)a0 localURL:(id)a1;

@end
