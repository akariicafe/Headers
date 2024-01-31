@class NSString, NTKFaceSlotComplicationDetailListProvider;

@interface NTKComplicationPickerDetailViewConfiguration : NTKComplicationPickerBaseViewConfiguration

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NTKFaceSlotComplicationDetailListProvider *listProvider;

- (void).cxx_destruct;
- (id)initWithDetailListProvider:(id)a0 title:(id)a1;

@end
