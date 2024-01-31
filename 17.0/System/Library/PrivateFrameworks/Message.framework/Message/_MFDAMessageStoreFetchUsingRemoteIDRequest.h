@interface _MFDAMessageStoreFetchUsingRemoteIDRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)generationNumber;

@end
