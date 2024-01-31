@class NSArray;

@interface MessageDeliveryContext : NSObject

@property (readonly, nonatomic) NSArray *displayIDs;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) unsigned int error;
@property (readonly, nonatomic) BOOL fromMeToMe;
@property (readonly, nonatomic) BOOL shouldDeactivate;

- (void).cxx_destruct;
- (id)initWithDisplayIDs:(id)a0 didSucceed:(BOOL)a1 withError:(unsigned int)a2 isFromMeToMe:(BOOL)a3 shouldDeactivate:(BOOL)a4;

@end
