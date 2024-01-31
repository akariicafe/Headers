@class NSString, NSMutableArray, NSArray;

@interface PXRadarConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *diagnosticProviders;
@property (readonly, nonatomic) NSMutableArray *legacyTapToRadars;
@property (readonly, nonatomic) NSMutableArray *screenshots;
@property (readonly, nonatomic) NSMutableArray *attachments;
@property (readonly, nonatomic) NSMutableArray *diagnosticContainers;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long component;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSArray *keywordIDs;
@property (nonatomic) BOOL attachmentsIncludeAnyUserAsset;
@property (nonatomic) BOOL wantsSystemDiagnostics;
@property (nonatomic) BOOL wantsPhotosDiagnostics;
@property (nonatomic) BOOL isProgressUIAllowed;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttachment:(id)a0;
- (void)addDiagnosticProvider:(id)a0;
- (void)addLegacyTapToRadar:(id)a0;
- (void)addScreenshot:(id)a0;
- (void)collectDiagnosticsWithCompletionHandler:(id /* block */)a0;

@end
