@interface DiagnosticPipelineRapidServiceFunctionsClientObjc : NSObject {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ environment;

- (id)init;
- (id)initWithEnvironment:(long long)a0;
- (void).cxx_destruct;
- (void)submitRapidPayloadWithBuildVariant:(id)a0 deviceCategory:(id)a1 deviceModel:(id)a2 platform:(id)a3 teamID:(id)a4 issueCategory:(id)a5 contextDictionaryData:(id)a6 requestTime:(unsigned long long)a7 build:(id)a8 logType:(id)a9 logSize:(unsigned long long)a10 fileName:(id)a11 uploadAttempts:(unsigned int)a12 payload:(id)a13 completionHandler:(id /* block */)a14;

@end
