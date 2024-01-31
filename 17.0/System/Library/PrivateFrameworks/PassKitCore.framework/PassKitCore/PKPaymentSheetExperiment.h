@interface PKPaymentSheetExperiment : PKExperiment

@property (readonly, nonatomic) BOOL isAA;
@property (readonly, nonatomic) BOOL isTaggedForHideDoubleClickToPay;
@property (readonly, nonatomic) BOOL shouldHideDoubleClickToPay;
@property (readonly, nonatomic) double timeIntervalToShowDoubleClickToPay;
@property (readonly, nonatomic) BOOL isTaggedForAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) BOOL shouldAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) BOOL isTaggedForLineItemsInMainPaymentSheet;
@property (readonly, nonatomic) BOOL shouldShowLineItemsInMainPaymentSheet;

- (id)namespaceName;

@end
