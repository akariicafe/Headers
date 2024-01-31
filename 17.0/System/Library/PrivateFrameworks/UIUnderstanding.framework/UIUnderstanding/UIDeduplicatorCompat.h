@interface UIDeduplicatorCompat : NSObject {
    void /* unknown type, empty encoding */ debugMode;
    void /* unknown type, empty encoding */ debugScreenshotCount;
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ screenGroupMap;
    void /* unknown type, empty encoding */ fingerprinter;
}

- (id)init;
- (void).cxx_destruct;
- (id)addElementsForScreenWithTargetScreenshot:(id)a0 candidateElements:(id)a1 screenGroupID:(id)a2 error:(id *)a3;
- (id)identifyElementsWithScreenshot:(id)a0 rectArray:(id)a1 error:(id *)a2;
- (id)identifyScreenshotWithId:(id)a0 image:(struct CGImage { } *)a1 error:(id *)a2;
- (id)initWithShape:(long long)a0 error:(id *)a1;

@end
