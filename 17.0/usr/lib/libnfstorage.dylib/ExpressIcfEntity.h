@class NSString;

@interface ExpressIcfEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;
@property (nonatomic) BOOL expressEnabled;
@property (copy, nonatomic) NSString *passID;
@property (copy, nonatomic) NSString *type;

+ (id)fetchRequest;

@end
