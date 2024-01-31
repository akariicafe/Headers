@class NSString;

@interface PMDevice : NSObject {
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ operatingSystemName;
    void /* unknown type, empty encoding */ operatingSystemVersion;
    void /* unknown type, empty encoding */ deviceImageSymbolName;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *operatingSystemName;
@property (nonatomic, readonly) NSString *operatingSystemVersion;
@property (nonatomic, readonly) NSString *deviceImageSymbolName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 operatingSystemName:(id)a1 operatingSystemVersion:(id)a2 deviceImageSymbolName:(id)a3;

@end
