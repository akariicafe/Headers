@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying>

@property (copy) NSString *owner;
@property (copy) NSData *signature;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSString *authURLString;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;

- (id)init;
- (void)dealloc;
- (long long)command;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
