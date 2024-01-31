@class NSString, NSHTTPURLResponse, NSData, NSMutableData;

@interface RCNetworkOperationTask : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSMutableData *dataStore;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)receiveData:(id)a0;
- (void)receiveHTTPResponse:(id)a0;

@end
