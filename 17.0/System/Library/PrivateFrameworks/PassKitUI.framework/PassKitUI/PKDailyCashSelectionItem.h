@class NSString, PKCurrencyAmount;
@protocol NSCopying;

@interface PKDailyCashSelectionItem : NSObject <PKIdentifiable> {
    unsigned long long _accountState;
}

@property (nonatomic) unsigned long long redemptionType;
@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (nonatomic) BOOL hasAccount;
@property (nonatomic) BOOL hasPendingApplication;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasRedeemed;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
