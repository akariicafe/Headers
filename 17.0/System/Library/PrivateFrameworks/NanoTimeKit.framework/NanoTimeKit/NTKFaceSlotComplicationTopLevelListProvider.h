@class NSArray, NSDictionary, NTKComplication, NSDiffableDataSourceSnapshot, NSString;
@protocol NTKComplicationItem;

@interface NTKFaceSlotComplicationTopLevelListProvider : NSObject <NTKComplicationPickerListProvider>

@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) NSDictionary *complicationsBySectionIdentifier;
@property (retain, nonatomic) NTKComplication *selectedItemIgnoringMoreButton;
@property (retain, nonatomic) id<NTKComplicationItem> pickerSelectedItem;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (readonly, nonatomic) unsigned long long topLevelLimit;
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
