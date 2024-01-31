@class NSArray, NSString, NSDictionary, _TtC10TipKitCore13CoreTipRecord, NSSet;

@interface TipKitCore.CoreEventRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, retain) _TtC10TipKitCore13CoreTipRecord *tip;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSSet *donations;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
