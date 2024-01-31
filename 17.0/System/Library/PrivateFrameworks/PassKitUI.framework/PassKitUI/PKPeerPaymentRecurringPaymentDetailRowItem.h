@class NSString, UIColor;

@interface PKPeerPaymentRecurringPaymentDetailRowItem : NSObject <PKIdentifiable>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) UIColor *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
