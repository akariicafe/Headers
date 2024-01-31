@interface SRLv2Plist : NSObject {
    float maskThreshold;
    float minFaceSize;
    float maxCurveBoost;
    float minCurveBoost;
    float maxTargetRatioDarkening;
    float maxTargetRatioLimit;
    float biasFactorSRLv2;
    float toneSimilaritySigma;
    float faceExpDifThreshold;
    BOOL relightOnlyPersonMask;
    float targetMedian_I;
    float targetMedian_II;
    float targetMedian_III;
    float targetMedian_IV;
    float targetMedian_V;
    float targetMedian_VI;
    float maxBoost_I;
    float maxBoost_II;
    float maxBoost_III;
    float maxBoost_IV;
    float maxBoost_V;
    float maxBoost_VI;
}

- (int)readPlist:(id)a0;

@end
