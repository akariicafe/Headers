@class NSString, NSObject;
@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip : STStorageTip

@property (weak) NSObject<STStorageOptionTipDelegate> *delegate;
@property (retain) NSString *enableButtonTitle;
@property float activationPercent;
@property (retain) NSString *activatingString;
@property long long immediateGain;
@property long long eventualGain;
@property BOOL mayCauseDataLoss;
@property (retain) NSString *confirmationText;
@property (retain) NSString *confirmationButtonTitle;
@property (retain) NSString *additionalButtonTitle;

- (id)init;
- (id)getValue:(id)a0;
- (void).cxx_destruct;
- (void)enableOption;
- (void)performAdditionalAction;
- (void)setValue:(id)a0 specifier:(id)a1;

@end
