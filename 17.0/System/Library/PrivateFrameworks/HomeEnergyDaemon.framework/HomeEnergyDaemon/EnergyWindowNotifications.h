@class NSString;

@interface EnergyWindowNotifications : NSManagedObject

@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) BOOL recurring;
@property (nonatomic) BOOL lastWindowWasClean;
@property (nonatomic) BOOL dispatched;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *homeID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
