@class NSString, NSURL, LPImage;

@interface SUStockLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *stockSymbol;
@property (readonly, nonatomic) NSString *stockName;
@property (readonly, nonatomic) NSURL *stockURL;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)initWithStockSymbol:(id)a0 name:(id)a1 url:(id)a2;

@end
