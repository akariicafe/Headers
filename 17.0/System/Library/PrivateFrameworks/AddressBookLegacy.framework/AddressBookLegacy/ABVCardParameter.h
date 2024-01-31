@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {
    NSString *_name;
    NSString *_grouping;
    id _value;
    NSMutableArray *_types;
    BOOL _primary;
}

- (void)dealloc;
- (BOOL)isPrimary;
- (void)setGrouping:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (id)types;
- (id)name;
- (id)value;
- (id)grouping;
- (void)addTypes:(id)a0;
- (void)setValue:(id)a0;
- (void)setIsPrimary:(BOOL)a0;
- (void)addType:(id)a0;

@end
