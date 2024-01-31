@class NSString;

@interface PXSharingConfidentialityController : NSObject

@property (class, readonly, nonatomic) BOOL confidentialityCheckRequired;
@property (class, readonly, nonatomic) NSString *confidentialityWarningTitle;
@property (class, readonly, nonatomic) NSString *confidentialityWarningMessage;
@property (class, readonly, nonatomic) NSString *confidentialFeatureWarningMessage;

+ (BOOL)confidentialWarningRequiredForAsset:(id)a0;
+ (BOOL)confidentialWarningRequiredForAssetReferences:(id)a0;
+ (BOOL)confidentialWarningRequiredForAssets:(id)a0;
+ (BOOL)confidentialWarningRequiredForShareableSelection:(id)a0;
+ (id)confidentialityAlertWithActions:(id)a0;
+ (id)confidentialityAlertWithConfirmAction:(id /* block */)a0;
+ (id)confidentialityAlertWithConfirmAction:(id /* block */)a0 abortAction:(id /* block */)a1;

@end
