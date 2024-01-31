@class NSMutableData, NSData;

@interface STSNFCHandoverHandler : NSObject {
    NSMutableData *_apduBuffer;
    NSData *_responseBuffer;
    unsigned long long _readIndex;
}

- (id)init;
- (void).cxx_destruct;

@end
