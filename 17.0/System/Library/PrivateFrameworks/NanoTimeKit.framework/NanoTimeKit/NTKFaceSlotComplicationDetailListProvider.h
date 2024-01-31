@class NSArray, NSDiffableDataSourceSnapshot, NSString;
@protocol NTKComplicationItem;

@interface NTKFaceSlotComplicationDetailListProvider : NSObject <NTKComplicationPickerListProvider>

@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (readonly, nonatomic) id<NTKComplicationItem> pickerSelectedItem;
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_buildDataIfNeeded;
- (id)initWithRichSlot:(BOOL)a0 complications:(id)a1 selectedComplication:(id)a2;

@end
