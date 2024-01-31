@interface ISJSONDataProvider : ISDataProvider

@property unsigned long long parserOptions;

- (id)init;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;

@end
