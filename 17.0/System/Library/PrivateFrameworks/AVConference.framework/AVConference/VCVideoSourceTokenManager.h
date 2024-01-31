@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCVideoSourceTokenManager : NSObject {
    VCVideoSourceTokenManager *_tokenManager;
    NSMutableDictionary *_videoSourceTokens;
    NSMutableDictionary *_sourceNames;
    unsigned long long _identifierSeeds[4];
    NSObject<OS_dispatch_queue> *_tokenManagerQueue;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })createtokenForDeviceName:(id)a0 sourceType:(int)a1;
- (id)deviceNameForToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })tokenForDeviceName:(id)a0 sourceType:(int)a1;

@end
