@class NSString, PKPaymentSetupField;
@protocol PKTextFieldCollectionViewListCellDelegate, NSCopying;

@interface PKApplyRequiredFieldRow : NSObject <PKApplyCollectionViewRow> {
    PKPaymentSetupField *_field;
    id<PKTextFieldCollectionViewListCellDelegate> _cellDelegate;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
