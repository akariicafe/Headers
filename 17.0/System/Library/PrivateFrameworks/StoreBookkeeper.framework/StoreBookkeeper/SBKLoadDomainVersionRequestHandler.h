@class SBKSyncTransaction, NSString;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing>

@property (nonatomic) unsigned long long itemCount;
@property (retain, nonatomic) SBKSyncTransaction *transaction;
@property (nonatomic) BOOL loadsRemoteItemCount;
@property (readonly, nonatomic) unsigned long long responseItemCount;
@property (copy, nonatomic) NSString *responseDomainVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)conflictDetectionType;

- (void).cxx_destruct;
- (void)runWithCompletionHandler:(id /* block */)a0;

@end
