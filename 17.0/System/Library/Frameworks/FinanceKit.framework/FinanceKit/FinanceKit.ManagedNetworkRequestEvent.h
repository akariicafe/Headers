@class NSUUID, NSString, NSURL, NSDate, NSData;

@interface FinanceKit.ManagedNetworkRequestEvent : NSManagedObject

@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSUUID *traceID;
@property (nonatomic, copy) NSURL *eventURL;
@property (nonatomic, copy) NSData *requestBody;
@property (nonatomic, copy) NSString *requestHeaders;
@property (nonatomic, copy) NSString *requestMethod;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
