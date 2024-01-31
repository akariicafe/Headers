@class NSString, BLJaliscoServerInfo, NSSet;

@interface BLJaliscoServerDatabase : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BLJaliscoServerInfo *server;
@property (retain, nonatomic) NSSet *items;

- (id)initIntoManagedObjectContext:(id)a0;

@end
