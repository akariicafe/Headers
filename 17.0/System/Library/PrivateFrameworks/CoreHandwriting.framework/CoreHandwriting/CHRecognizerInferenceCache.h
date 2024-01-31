@class NSMutableDictionary, CHDrawing;

@interface CHRecognizerInferenceCache : NSObject {
    CHDrawing *_lastDrawing;
    NSMutableDictionary *_cachedActivationMatrices;
    NSMutableDictionary *_cachedStrokeIndexMappings;
    NSMutableDictionary *_cachedStrokeEndings;
}

- (id)init;
- (void)clearCache;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)cacheActivationMatrix:(id)a0 strokeIndexMapping:(id)a1 strokeEndings:(id)a2 drawing:(id)a3 recognitionEngineCachingKey:(id)a4;
- (id)retrieveActivationMatrixForDrawing:(id)a0 recognitionEngineCachingKey:(id)a1 outStrokeIndexMapping:(id *)a2 outStrokeEndings:(id *)a3;

@end
