@class NSSet;

@interface _SBDisplayItemLayoutAttributesMapKey : NSObject {
    NSSet *_displayItems;
    long long _displayOrdinal;
    unsigned long long _hash;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAppLayout:(id)a0 displayOrdinal:(long long)a1;

@end
