@interface AKAuthorizationTVServicePresenter : NSObject

- (long long)_typeFromString:(id)a0;
- (id)_stringForType:(long long)a0;
- (id)_filterDeprecatedType:(id)a0;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildDidTapNotificationMessage;
- (id)buildFetchAppIconMessage;
- (id)buildFetchAppIconReplyWithImageData:(id)a0 imageScale:(id)a1;
- (long long)typeOfMessage:(id)a0;

@end
