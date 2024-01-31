@class NSString, CVNLPActivationMatrix;

@interface CVNLPCTCTextDecoder : CVNLPTextDecoder <CVNLPTextDecoding>

@property (retain, nonatomic) CVNLPActivationMatrix *activationMatrix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLanguageResourceBundle:(id)a0;
- (id)decodingResultForKBestPaths:(unsigned long long)a0 withBeamWidth:(unsigned long long)a1;
- (id)decodingResultForKBestPaths:(unsigned long long)a0 withBeamWidth:(unsigned long long)a1 context:(id)a2;
- (id)decodingResultForKBestPaths:(unsigned long long)a0 withBeamWidth:(unsigned long long)a1 context:(id)a2 optimizeAlignment:(BOOL)a3;
- (id)decodingResultWithConfiguration:(id)a0 withContext:(id)a1;
- (id)greedyDecodingResult;
- (id)greedyDecodingResultWithConfiguration:(id)a0;

@end
