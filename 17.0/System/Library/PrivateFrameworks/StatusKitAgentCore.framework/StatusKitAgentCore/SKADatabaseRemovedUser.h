@class NSString, NSDate;

@interface SKADatabaseRemovedUser : NSObject

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) NSDate *dateRemoved;

- (void).cxx_destruct;
- (id)initWithCoreDataRemovedUser:(id)a0;
- (id)initWithHandle:(id)a0 statusTypeIdentifier:(id)a1 presenceIdentifier:(id)a2 dateRemoved:(id)a3;

@end
