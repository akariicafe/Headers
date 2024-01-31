@class NSUUID, NSString, NSURL, NSDate, NSData;

@interface FinanceKit.ManagedNetworkResponseEvent : NSManagedObject

@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSURL *eventURL;
@property (nonatomic, copy) NSUUID *traceID;
@property (nonatomic, copy) NSData *responseBody;
@property (nonatomic) short responseStatusCode;
@property (nonatomic, copy) NSString *responseHeaders;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
