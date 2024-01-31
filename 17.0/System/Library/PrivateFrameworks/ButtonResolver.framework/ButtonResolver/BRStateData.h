@class NSMutableDictionary;

@interface BRStateData : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSMutableDictionary *speedConfigs;
@property (readonly, nonatomic) NSMutableDictionary *speedSlots;
@property (readonly, nonatomic) id propertyList;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(unsigned long long)a0 enabled:(BOOL)a1;
- (id)initWithStateData:(id)a0;

@end
