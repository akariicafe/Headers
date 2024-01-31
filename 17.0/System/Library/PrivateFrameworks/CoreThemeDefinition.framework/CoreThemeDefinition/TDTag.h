@class NSString, NSSet;

@interface TDTag : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *productions;

@end
