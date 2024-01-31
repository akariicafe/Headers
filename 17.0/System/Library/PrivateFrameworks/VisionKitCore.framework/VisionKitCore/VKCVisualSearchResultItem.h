@class VKCImageAnalysis, MADVIVisualSearchGatingResultItem, NSString, MADVIVisualSearchResultItem, MADVIVisualSearchGatingDomainInfo, UIMenu;

@interface VKCVisualSearchResultItem : NSObject <VKAnalysisElementDebugMenuProvider>

@property (retain, nonatomic) MADVIVisualSearchGatingResultItem *resultItem;
@property (weak, nonatomic) VKCImageAnalysis *analysis;
@property (retain, nonatomic) MADVIVisualSearchResultItem *searchItem;
@property (nonatomic) unsigned long long queryID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedBoundingBox;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } normalizedIconLocation;
@property (readonly, nonatomic) BOOL shouldPlaceInCorner;
@property (readonly, nonatomic) BOOL hasFocalPoint;
@property (readonly, nonatomic) NSString *glyphName;
@property (readonly, nonatomic) NSString *label;
@property (retain, nonatomic) MADVIVisualSearchGatingDomainInfo *domainInfo;
@property (nonatomic) long long currentInvocationType;
@property (readonly, nonatomic) UIMenu *debugMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
