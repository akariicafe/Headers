@class NSString, NSData;

@interface RMConnectionClientCachedMessage : NSObject {
    NSString *_name;
    NSData *_data;
    id /* block */ _streamingCallback;
}

- (void).cxx_destruct;

@end
