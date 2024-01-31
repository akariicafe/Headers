@class NSString, PKPaymentBalance, NSDate, PKPaymentPassAction;

@interface NPKBalanceField : NSObject <NPKBalanceField> {
    NSDate *_pendingUpdateExpireDate;
}

@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) BOOL isPrimaryBalance;
@property (readonly, nonatomic) PKPaymentBalance *balance;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *detailLabel;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) BOOL hasPendingUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
