@class PKPaymentPreference;

@interface PKPaymentPreferenceListItem : NSObject <NSCopying>

@property (readonly, nonatomic) PKPaymentPreference *sectionPreference;

- (void).cxx_destruct;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_internalConfiguration;
- (id)_text;
- (id)_image;
- (id)_secondaryText;
- (id)defaultAccessories;
- (id)initWithSectionPreference:(id)a0;
- (BOOL)isAddItem;
- (BOOL)isOptionItem;
- (BOOL)supportsInlineEditing;
- (BOOL)supportsSwipeActionType:(int)a0;

@end
