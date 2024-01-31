@class NSString, NSSet;

@interface PFCRShare : NSManagedObject

@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSSet *participants;

@end
