@class NSXPCConnection;

@interface TCXPCClient : NSObject {
    NSXPCConnection *_connection;
    BOOL _valid;
}

- (void)setValid:(BOOL)a0;
- (id)init;
- (id)connection;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)_dataFromCheckingString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 optionsData:(id)a3 completionHandler:(id /* block */)a4;
- (id)_textCheckingResultsFromData:(id)a0;
- (void)recordResponse:(unsigned long long)a0 toGrammarDetail:(id)a1 language:(id)a2 appIdentifier:(id)a3;
- (void)requestCheckingOfString:(id)a0 language:(id)a1 offset:(unsigned long long)a2 options:(id)a3 completionHandler:(id /* block */)a4;

@end
