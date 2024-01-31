@class NSArray, NSString, NSSet, NSData;

@interface TipKitCore.CoreParameterRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSData *valueData;
@property (nonatomic, copy) NSString *valueType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
