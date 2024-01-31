@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (id)init;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;
- (id)initWithContextKitClient:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAcceptSafariDonation:(id)a0;

@end
