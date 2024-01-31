@interface HapticDictionaryWriter : NSObject {
    unsigned long long _urlIndex;
}

- (id)paramCurveControlPointsToArray:(id)a0;
- (id)eventParamsToArray:(id)a0;
- (id)eventToDictionary:(id)a0 embeddedResourceInfo:(id)a1;
- (id)paramCurveToDictionary:(id)a0;
- (id)paramToDictionary:(id)a0;
- (id)patternToDictionary:(id)a0 events:(id)a1 parameters:(id)a2 parameterCurves:(id)a3 embeddedResourceInfo:(id)a4 configuration:(id)a5;

@end
