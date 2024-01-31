@interface EntityKey : NSObject

@property int elementId;
@property int edgeElementId;
@property int parentElementId;

+ (id)personEntity;
+ (id)calendarEventName;
+ (id)currencyName;
+ (id)userEntity;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithElementId:(int)a0 edgeElementId:(int)a1 parentElementId:(int)a2;
- (BOOL)isEqualToEntityKey:(id)a0;

@end
