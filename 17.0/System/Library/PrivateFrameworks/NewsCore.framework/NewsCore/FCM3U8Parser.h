@class NSString, NSData, NSMutableData, NSError;
@protocol FCM3U8ParserDelegate;

@interface FCM3U8Parser : NSObject <NSURLSessionDataDelegate> {
    BOOL _collectForRewrite;
    id<FCM3U8ParserDelegate> _delegate;
    NSData *_data;
    NSMutableData *_bytes;
    NSError *_error;
    NSMutableData *_collectedData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
