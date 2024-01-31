@class NSString, NSURL, NSError, NSNumber, SKPaymentTransaction;

@interface SKDownloadInternal : NSObject {
    NSNumber *_downloadID;
    NSString *_productID;
    long long _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    double _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
    SKPaymentTransaction *_transaction;
}

- (void).cxx_destruct;

@end
