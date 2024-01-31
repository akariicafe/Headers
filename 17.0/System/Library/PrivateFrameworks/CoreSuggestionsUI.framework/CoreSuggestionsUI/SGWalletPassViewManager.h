@class NSData, PKPass;

@interface SGWalletPassViewManager : NSObject

@property (readonly, nonatomic) NSData *passData;
@property (readonly, nonatomic) PKPass *pass;

- (id)organizationName;
- (id)icon;
- (id)initWithData:(id)a0;
- (id)passes;
- (void).cxx_destruct;
- (id)title;
- (id)passView;
- (id)passStyle;
- (id)addPassViewController;
- (double)passTimeInterval;

@end
