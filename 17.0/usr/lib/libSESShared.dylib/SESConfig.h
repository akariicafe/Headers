@class NSString, NSURL, NSDictionary;

@interface SESConfig : NSObject {
    NSURL *_path;
    NSString *_minOSKey;
    float _productVersion;
    unsigned long long _component;
    NSDictionary *_config;
}

@property (readonly) NSString *manufacturer;

- (void).cxx_destruct;
- (id)getConfigForComponent:(unsigned long long)a0 manufacturer:(id)a1 error:(id *)a2;
- (id)initWithDeviceClass:(id)a0 productVersion:(float)a1;
- (id)initWithDeviceClass:(id)a0 productVersion:(float)a1 path:(id)a2;
- (id)readConfigForComponent:(id)a0 manufacturer:(id)a1 isProfile:(BOOL)a2 error:(id *)a3;

@end
