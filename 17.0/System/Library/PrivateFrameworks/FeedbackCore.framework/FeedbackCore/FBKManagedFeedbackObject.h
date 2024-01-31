@class NSNumber;

@interface FBKManagedFeedbackObject : NSManagedObject

@property (copy, nonatomic) NSNumber *ID;
@property (copy, nonatomic) NSNumber *remoteID;

+ (id)entityName;
+ (id)importFromJSONArray:(id)a0 intoContext:(id)a1;
+ (id)importFromJSONObject:(id)a0 intoContext:(id)a1;

- (id)entityName;
- (BOOL)isEqualToFBKObject:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
