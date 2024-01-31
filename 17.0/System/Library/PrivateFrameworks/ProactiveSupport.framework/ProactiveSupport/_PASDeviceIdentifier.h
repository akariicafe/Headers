@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)init;
- (void)reset;
- (id)initWithBasePath:(id)a0;
- (void).cxx_destruct;

@end
