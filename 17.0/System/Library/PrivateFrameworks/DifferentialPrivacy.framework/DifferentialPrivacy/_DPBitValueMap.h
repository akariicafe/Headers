@class NSString, NSDictionary;

@interface _DPBitValueMap : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSDictionary *map;

+ (void)initialize;
+ (id)bitValueMapForKey:(id)a0;
+ (id)bitValueMapForKey:(id)a0 bitValueMapsDirectory:(id)a1;
+ (id)bitValueMapForKey:(id)a0 fromConfigurationsFile:(id)a1;
+ (void)removeBitValueMapForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)bitValueForString:(id)a0;
- (id)initWithKey:(id)a0 bitValueMapsDirectory:(id)a1;

@end
