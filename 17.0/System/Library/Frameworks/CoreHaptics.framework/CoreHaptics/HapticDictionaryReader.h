@interface HapticDictionaryReader : NSObject {
    unsigned long long _urlIndex;
}

- (id)parseConfiguration:(id)a0 error:(id *)a1;
- (id)parseEvent:(id)a0 withBaseURL:(id)a1;
- (id)parseEventParams:(id)a0;
- (BOOL)parseEventsAndParameters:(id)a0 withBaseURL:(id)a1 reply:(id /* block */)a2;
- (id)parseParam:(id)a0;
- (id)parseParamCurve:(id)a0;
- (id)parseParamCurveControlPoints:(id)a0;
- (id)readAndVerifyVersion:(id)a0 error:(id *)a1;
- (id)scanForEmbeddedResources:(id)a0;

@end
