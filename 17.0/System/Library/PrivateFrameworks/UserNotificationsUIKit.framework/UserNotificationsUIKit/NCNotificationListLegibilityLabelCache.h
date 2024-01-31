@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (id)init;
- (void)clearAll;
- (void).cxx_destruct;
- (id)_stringDescriptorForFont:(id)a0;
- (id)_createLegibilityLabelWithTitle:(id)a0 font:(id)a1;
- (id)legibilityLabelForTitle:(id)a0 forSuperview:(id)a1 font:(id)a2;

@end
