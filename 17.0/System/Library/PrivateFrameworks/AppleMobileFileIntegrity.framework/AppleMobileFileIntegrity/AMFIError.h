@interface AMFIError : NSError

- (id)initWithAMFIErrorCode:(long long)a0 withURL:(id)a1;
- (id)initWithMISError:(int)a0 withURL:(id)a1;

@end
