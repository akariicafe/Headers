@class NSNumber;

@interface FBKManagedLocalIDObject : FBKManagedFeedbackObject

@property (copy) NSNumber *serverID;

+ (id)uniquingKey;
+ (id)transformJSONArrayIntoLocalIDJSON:(id)a0 uniquingPrefix:(id)a1;
+ (id)transformJSONDictionaryIntoLocalIDJSON:(id)a0 uniquingPrefix:(id)a1;

- (id)ID;
- (void)setID:(id)a0;
- (void)setPropertiesForLocalIDKeys:(id)a0;

@end
