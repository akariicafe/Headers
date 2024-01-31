@class NSDateFormatter;

@interface AKCommandLineUtilities : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)_hostURL;
- (void)createAndExecuteRequestForPath:(id)a0 requestBody:(id)a1 httpMethod:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
- (id)errorFromServerResponseBody:(id)a0;
- (id)jsonDictionaryForData:(id)a0 error:(id)a1;
- (id)mutableJSONRequestForPath:(id)a0;
- (id)mutableJSONRequestForURL:(id)a0;

@end
