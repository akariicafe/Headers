@class NSArray, NSString, UIColor;

@interface SBHWidgetStackDescriptor : NSObject <SBHAddWidgetSheetGalleryItem>

@property (retain, nonatomic) NSArray *smallStackDescriptors;
@property (retain, nonatomic) NSArray *mediumStackDescriptors;
@property (retain, nonatomic) NSArray *largeStackDescriptors;
@property (retain, nonatomic) NSArray *extraLargeStackDescriptors;
@property (readonly, copy, nonatomic) NSString *sbh_galleryItemIdentifier;
@property (readonly, copy, nonatomic) NSString *sbh_appName;
@property (readonly, copy, nonatomic) NSString *sbh_widgetName;
@property (readonly, nonatomic) unsigned long long sbh_supportedSizeClasses;
@property (readonly, copy, nonatomic) NSString *sbh_widgetDescription;
@property (readonly, nonatomic) BOOL sbh_canBeAddedToStack;
@property (readonly, nonatomic) BOOL sbh_supportsRemovableBackground;
@property (readonly, nonatomic) BOOL sbh_supportsRemovableBackgroundOrAccessoryFamilies;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, copy, nonatomic) UIColor *accentColor;
@property (readonly, copy, nonatomic) UIColor *mostInterestingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)sbh_disfavoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)a0;
- (id)descriptorsForSizeClass:(long long)a0;
- (id)initWithSmallStackDescriptors:(id)a0 mediumStackDescriptors:(id)a1 largeStackDescriptors:(id)a2 extraLargeStackDescriptors:(id)a3;
- (void).cxx_destruct;
- (unsigned long long)sbh_favoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)sbh_isLinkedOnOrAfter:(unsigned long long)a0;

@end
