@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *securityOrigin;
@property (nonatomic) BOOL isLocalStorage;

- (id)initWithSecurityOrigin:(id)a0 isLocalStorage:(BOOL)a1;

@end
