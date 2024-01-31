@class NSArray, NSData;

@interface CHSRemoteDevicesBox : NSObject <CHSXPCEncodable> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *devices;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDevices:(id)a0;
- (void)prepareForEncoding;

@end
