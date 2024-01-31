@class NSArray, NSString, NSMutableSet, NSMutableOrderedSet;
@protocol _UIButtonBarGroupOrderOwner;

@interface _UIButtonBarGroupOrderer : NSObject {
    NSMutableOrderedSet *_includedItems;
    NSMutableSet *_excludedItems;
    NSArray *_orderedGroups;
    NSString *_customizationIdentifier;
    id<_UIButtonBarGroupOrderOwner> _owner;
}

- (void).cxx_destruct;
- (BOOL)_hasCustomization;
- (id)_initWithCustomizationIdentifier:(id)a0 data:(id)a1;
- (void)_orderGroups;

@end
