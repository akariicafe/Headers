@class NSSet;
@protocol HFIconDescriptor;

@interface HFServiceIconSet : NSObject

@property (readonly, nonatomic) NSSet *allIcons;
@property (readonly, nonatomic) id<HFIconDescriptor> defaultIcon;

+ (id)placeholderIconSet;
+ (id)setWithDefaultIcon:(id)a0;
+ (id)setWithDefaultIcon:(id)a0 alternateIcons:(id)a1;
+ (id)setWithImageIdentifier:(id)a0;

- (void).cxx_destruct;

@end
