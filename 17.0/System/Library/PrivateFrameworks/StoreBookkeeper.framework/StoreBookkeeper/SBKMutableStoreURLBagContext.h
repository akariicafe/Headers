@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSURL *syncRequestURL;
@property (retain, nonatomic) NSURL *pushKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pullKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pushAllKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pullAllKeyValueRequestURL;
@property (nonatomic) BOOL domainDisabled;
@property (nonatomic) double pollingIntervalInSeconds;

@end
