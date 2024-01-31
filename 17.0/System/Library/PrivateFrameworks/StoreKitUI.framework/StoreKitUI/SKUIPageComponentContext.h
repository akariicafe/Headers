@class NSDictionary, NSArray, NSMutableSet;

@interface SKUIPageComponentContext : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *componentDictionary;
@property (copy, nonatomic) NSDictionary *items;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) double pageGenerationTime;
@property (copy, nonatomic) NSDictionary *platformKeyProfileOverrides;
@property (copy, nonatomic) NSArray *ineligibleGratisIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *allUnavailableItemIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemForItemIdentifier:(id)a0;
- (void)addUnavailableItemIdentifiers:(id)a0;
- (BOOL)isUnavailableItemIdentifier:(id)a0;
- (void)setUnavailableItemIdentifiers:(id)a0;

@end
