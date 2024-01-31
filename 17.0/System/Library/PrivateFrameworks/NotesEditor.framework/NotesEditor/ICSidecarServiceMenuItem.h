@class NSString, NSData;

@interface ICSidecarServiceMenuItem : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSData *data;

- (id)init;
- (id)initWithType:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
