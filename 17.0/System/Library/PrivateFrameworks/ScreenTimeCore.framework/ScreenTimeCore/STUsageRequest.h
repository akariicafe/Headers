@class NSNumber, NSDate;

@interface STUsageRequest : NSManagedObject

@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSNumber *forUserDSID;
@property (retain, nonatomic) NSDate *requestedDate;
@property (nonatomic) BOOL isBackgroundTask;

+ (id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchOrCreateUsageRequestForLocalUserInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateUsageRequestForUser:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchOrCreateUsageRequestForUserWithDSID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequestForLocalUsageRequests;
+ (id)fetchRequestForUsageRequestsThatAreForRemoteUsers;

@end
