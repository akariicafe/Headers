@class NSString, PKPaymentSetupFieldPickerItem;
@protocol NSCopying;

@interface PKApplyListPickerRow : NSObject <PKApplyCollectionViewRow>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *submissionValue;
@property (readonly, nonatomic) PKPaymentSetupFieldPickerItem *pickerItem;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
