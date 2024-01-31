@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {
    AVContentKeyResponseInternal *_keyResponse;
}

+ (id)contentKeyResponseWithAuthorizationTokenData:(id)a0;
+ (id)contentKeyResponseWithClearKeyData:(id)a0 initializationVector:(id)a1;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)a0;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)a0 renewalDate:(id)a1;

- (void)dealloc;
- (id)initWithKeySystem:(id)a0;
- (id)keySystem;

@end
