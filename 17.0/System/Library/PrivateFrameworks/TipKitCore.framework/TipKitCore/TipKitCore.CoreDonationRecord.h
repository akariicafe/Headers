@class NSArray, NSDictionary, _TtC10TipKitCore15CoreEventRecord, NSDate;

@interface TipKitCore.CoreDonationRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDictionary *donationInfo;
@property (nonatomic, retain) _TtC10TipKitCore15CoreEventRecord *event;

+ (id)fetchDonationValueWithRule:(id)a0 event:(id)a1 context:(id)a2 error:(id *)a3;
+ (id)fetchDonationsWithEventID:(id)a0 context:(id)a1;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)donationValueFor:(id)a0;

@end
