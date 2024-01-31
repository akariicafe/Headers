@class CRTextOrientationRecognizerConfiguration, CRTextOrientationModelV1, NSString, CRCTCCVNLPOrientationDecoder;

@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting, CRTextSequenceScriptCorrecting>

@property (retain) CRTextOrientationModelV1 *model;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder;
@property (retain) CRTextOrientationRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (long long)_angleDirectionOfBaselineAngle:(double)a0;
- (void)_correctScriptOnRegions:(id)a0 indexes:(id)a1 image:(id)a2 rectifier:(id)a3 error:(id *)a4;
- (id)_indexSetFromIndices:(id)a0;
- (id)_lineRegion:(id)a0 applyingAngleDirection:(long long)a1;
- (BOOL)_loadResourcesWithError:(id *)a0;
- (id)_localeSortedRegions:(id)a0 indexSet:(id)a1;
- (long long)_orientationForBaselineAngle:(double)a0;
- (long long)_orientationForBaselineAngle:(double)a0 layoutDirection:(unsigned long long)a1;
- (void)_scriptCorrectionBasedOnLayoutDirectionOnLineRegions:(id)a0;
- (long long)calculateAngleDirectionForInput:(id)a0 error:(id *)a1;
- (long long)calculateAngleDirectionForTextFeatureInfo:(id)a0 error:(id *)a1;
- (unsigned long long)calculateLayoutDirectionForInput:(id)a0 error:(id *)a1;
- (BOOL)decodeOutputForInput:(id)a0 shouldDecodeScriptResult:(BOOL)a1 shouldDecodeOrientationResult:(BOOL)a2 shouldDecodeLayoutDirectionResult:(BOOL)a3 error:(id *)a4;
- (id)regionsByCorrectingOrientationOnSortedRegions:(id)a0 correctAllRegions:(BOOL)a1 image:(id)a2 rectifier:(id)a3 error:(id *)a4;
- (id)regionsByCorrectingSequenceScriptOnSortedRegions:(id)a0 correctAllRegions:(BOOL)a1 image:(id)a2 rectifier:(id)a3 error:(id *)a4;

@end
