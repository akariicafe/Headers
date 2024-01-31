@class ICJSSignConfiguration;

@interface ICJSSign : NSObject {
    ICJSSignConfiguration *_configuration;
}

- (id)signatureStringWithURLRequest:(id)a0;
- (id)signatureDataWithURLRequest:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
