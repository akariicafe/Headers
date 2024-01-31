@class NSString, PKPassShareSelectDateSectionController;

@interface PKPassShareSelectDateViewController : PKPaymentSetupOptionsViewController <PKPassShareSelectDateSectionControllerDelegate> {
    PKPassShareSelectDateSectionController *_sectionController;
}

@property (copy, nonatomic) id /* block */ dateChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
