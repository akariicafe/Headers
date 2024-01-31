@class CRXFCalibrationDataDownloader;

@interface CRXFLiteACCFetcher : NSObject {
    CRXFCalibrationDataDownloader *_downloader;
}

- (void).cxx_destruct;
- (void)fetchACCsForSerialNumbers:(id)a0 completion:(id /* block */)a1;
- (id)initWithServerEnvironment:(unsigned long long)a0 timeout:(double)a1;

@end
