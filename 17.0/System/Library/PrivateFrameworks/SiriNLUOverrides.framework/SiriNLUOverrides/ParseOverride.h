@class NSData, NSString, NSDate;

@interface ParseOverride : NSManagedObject

@property (nonatomic, copy) NSData *archivedNluRequestRule;
@property (nonatomic, copy) NSDate *creation;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *inputText;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) int namespace;
@property (nonatomic, copy) NSString *overrideId;
@property (nonatomic) int source;
@property (nonatomic, copy) NSData *userParse;
@property (nonatomic) int utteranceComparisonType;

- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
