@class NSSet, NSString;

@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSString *payloadBookmarkPath;
@property (copy, nonatomic) NSString *payloadTitle;

+ (id)buildRequiredOnlyWithURL:(id)a0 withTitle:(id)a1;
+ (id)buildWithURL:(id)a0 withBookmarkPath:(id)a1 withTitle:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
