@class NSString, NSError, UIAction;

@interface SUSSoftwareUpdateScanCell : PSTableCell <SUSSoftwareUpdateCellProtocol>

@property (retain, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSString *errorPrimaryButton;
@property (retain, nonatomic) UIAction *errorPrimaryButtonAction;
@property (retain, nonatomic) NSString *currentVersion;
@property (retain, nonatomic) NSError *scanError;
@property BOOL updatesDeferred;
@property BOOL suPathsRestricted;
@property (nonatomic) int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)contentUnavailableConfigurationForState:(int)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)a0;
- (id)upToDateManagedText;
- (id)upToDateText;
- (id)upToDateWithAlternate;

@end
