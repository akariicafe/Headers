@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void)handleResult:(id)a0 atRequestIdx:(unsigned long long)a1 forRequestID:(int)a2;

@end
