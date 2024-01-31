@class PAEKeyerHistogram, PAEKeyerAutokeySetup;

@interface PAEKeyerAutokeySetupUtil : NSObject {
    id _apiManager;
    PAEKeyerAutokeySetup *_autokeySetup;
    PAEKeyerHistogram *_keyerHistogram;
    id _actionAPI;
    id _getAPI;
    id _setAPI;
}

- (void)dealloc;
- (void)syncWithDB;
- (void)setHistogram:(void *)a0;
- (void)addInitialSample:(struct Vec3f { float x0[3]; } *)a0;
- (void)clearInitialSamples;
- (void)delInitialSample:(int)a0;
- (void)fillAutokeySamplesArray:(void *)a0;
- (void)getDataFromDB;
- (void *)getHistogram;
- (float)getHistogramScale;
- (struct Vec3f { float x0[3]; })getInitialSample:(int)a0;
- (struct Vec3f { float x0[3]; })getInitialSample:(int)a0 usingArray:(id)a1;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (id)initWithAPIManager:(id)a0;
- (void)setHistogramScale:(float)a0;
- (void)syncWithDBAsDefault;

@end
