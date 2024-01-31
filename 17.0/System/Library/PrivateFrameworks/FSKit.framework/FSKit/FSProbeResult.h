@class NSString, NSUUID;

@interface FSProbeResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int result;
@property (readonly) NSString *name;
@property (readonly) NSUUID *containerUUID;

+ (id)newResult:(int)a0 name:(id)a1 uuid:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(int)a0 name:(id)a1 uuid:(id)a2;

@end
