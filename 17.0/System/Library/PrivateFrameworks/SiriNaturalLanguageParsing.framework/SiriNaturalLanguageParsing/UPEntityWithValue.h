@class NSString;

@interface UPEntityWithValue : NSObject

@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSString *entityValue;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 entityName:(id)a1 entityValue:(id)a2;
- (BOOL)isEqualToEntityWithValue:(id)a0;

@end
