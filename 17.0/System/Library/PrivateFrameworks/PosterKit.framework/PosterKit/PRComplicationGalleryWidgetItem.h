@class NSString, PRComplicationDescriptor;

@interface PRComplicationGalleryWidgetItem : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isIconImageHidden) BOOL iconImageHidden;
@property (readonly, nonatomic) PRComplicationDescriptor *descriptor;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long kind;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayName:(id)a0 selected:(BOOL)a1 iconImageHidden:(BOOL)a2 descriptor:(id)a3;
- (id)initWithDisplayName:(id)a0 selected:(BOOL)a1 iconImageHidden:(BOOL)a2 text:(id)a3 kind:(long long)a4;

@end
