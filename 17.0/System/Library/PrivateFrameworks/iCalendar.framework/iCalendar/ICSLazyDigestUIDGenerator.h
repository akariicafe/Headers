@class NSData, NSString;

@interface ICSLazyDigestUIDGenerator : NSObject <ICSUIDGenerator> {
    NSData *_data;
    NSString *_digest;
    int _lastIndex;
}

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)_digest;
- (id)generateUID;

@end
