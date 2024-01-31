@class SBHApplicationWidgetCollection, PRComplicationGalleryWidgetItem;

@interface PRComplicationGalleryItem : NSObject

@property (readonly, nonatomic) PRComplicationGalleryWidgetItem *widgetItem;
@property (readonly, nonatomic) SBHApplicationWidgetCollection *applicationWidgetCollection;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationWidgetCollection:(id)a0;
- (id)initWithWidgetItem:(id)a0;

@end
