@class NSError, NSString, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_group;

@interface CKDPCSKeySyncTracker : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountDsid;
@property (nonatomic, getter=isManatee) BOOL manatee;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSNumber *syncStatus;
@property (retain, nonatomic) NSError *syncError;
@property (nonatomic) BOOL KRSReturnedExistingIdentity;
@property (copy, nonatomic) NSString *requestorOperationID;

- (void).cxx_destruct;
- (void)waitOnSyncWithQueue:(id)a0 waiterOperationID:(id)a1 handler:(id /* block */)a2;

@end
