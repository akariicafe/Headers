@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject

@property (retain) PHMediaFormatConversionRequest *conversionRequest;
@property (copy) id /* block */ completionHandler;

- (id)description;
- (void).cxx_destruct;

@end
