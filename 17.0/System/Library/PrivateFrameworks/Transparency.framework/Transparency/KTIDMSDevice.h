@class NSString;

@interface KTIDMSDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *deviceID;
@property (retain) NSString *name;
@property (retain) NSString *pushToken;
@property (retain) NSString *model;
@property (retain) NSString *osVersion;
@property (retain) NSString *build;
@property (retain) NSString *serial;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
