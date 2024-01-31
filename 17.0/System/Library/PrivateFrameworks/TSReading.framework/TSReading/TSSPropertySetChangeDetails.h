@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

- (id)init;
- (void)dealloc;
- (id)changedProperties;
- (void)addChangedProperty:(int)a0;
- (void)addChangedProperties:(id)a0;
- (id)initWithChangedProperties:(id)a0;

@end
