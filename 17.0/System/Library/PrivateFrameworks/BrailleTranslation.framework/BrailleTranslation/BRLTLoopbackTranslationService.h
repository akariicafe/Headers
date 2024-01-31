@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService

@property (retain, nonatomic) BRLTSLoopbackTranslationService *loopbackService;

- (BOOL)isLoopback;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0 connection:(id)a1 loopbackService:(id)a2;

@end
