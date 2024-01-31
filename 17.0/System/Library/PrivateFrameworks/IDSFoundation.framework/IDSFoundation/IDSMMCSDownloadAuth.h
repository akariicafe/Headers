@class NSData, NSString, NSDictionary;

@interface IDSMMCSDownloadAuth : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSString *authURL;
@property (readonly, nonatomic) NSString *ownerID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSignature:(id)a0 authURL:(id)a1 ownerID:(id)a2;

@end
