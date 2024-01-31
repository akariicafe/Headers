@class MADVIVisualSearchResult, MADVIVisualSearchGatingResult, VKCImageAnalysis, NSData, NSArray;

@interface VKCVisualSearchResult : NSObject

@property (retain, nonatomic) MADVIVisualSearchGatingResult *gatingResult;
@property (weak, nonatomic) VKCImageAnalysis *analysis;
@property (retain, nonatomic) MADVIVisualSearchResult *searchResult;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSData *userFeedbackPayload;
@property (readonly, nonatomic) NSArray *resultItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGatingResult:(id)a0;

@end
