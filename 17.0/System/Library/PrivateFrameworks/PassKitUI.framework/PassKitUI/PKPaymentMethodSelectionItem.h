@class NSString, PKCurrencyAmount, PKPaymentPass;
@protocol NSCopying;

@interface PKPaymentMethodSelectionItem : NSObject <PKIdentifiable> {
    NSString *_identifier;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSString *paymentMethodName;
@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
