@class PKRemotePaymentInstrument, PKPaymentPass, NSString, PKPaymentApplication;

@interface PKPaymentPreferenceCardEntry : NSObject

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *availabilityString;
@property (nonatomic) BOOL shouldShowCardUI;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL insetsSeparatorByTextOffset;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
