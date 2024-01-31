@class NSMutableDictionary, NSMutableArray;

@interface CRRecognitionResult : NSObject <NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapUpdateLock;
}

@property (retain) NSMutableDictionary *detectorRecognizerResultMap;
@property (retain) NSMutableArray *detectedLineRegions;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateResultsUsingBlock:(id /* block */)a0;
- (id)_recognizedRegionsForDetectedLineRegion:(id)a0;
- (void)addRecognizedRegionPair:(id)a0;
- (id)recognizedLineRegions;
- (id)recognizedRegionsForDetectedLineRegion:(id)a0;
- (id)recognizedRegionsForDetectedLineRegions:(id)a0;

@end
