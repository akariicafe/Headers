@class NSString, NSObject;

@interface ExpressESEEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) NSObject *ecp2Info;
@property (nonatomic) BOOL expressEnabled;
@property (nonatomic) int groupActivationStyle;
@property (copy, nonatomic) NSString *groupHead;
@property (retain, nonatomic) NSObject *groupMembers;
@property (nonatomic) BOOL inSessionOnly;
@property (nonatomic) BOOL isUserChoice;
@property (copy, nonatomic) NSString *keyID;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *passID;
@property (copy, nonatomic) NSString *readerID;
@property (nonatomic) BOOL supportsUWB;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int version;

+ (id)fetchRequest;

@end
