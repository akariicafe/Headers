@class NSArray, NSDictionary, NSURL, NSUUID;

@interface ASDManifestRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *manifest;
@property (retain) NSURL *manifestURL;
@property long long archiveType;
@property (retain) NSArray *certificates;
@property BOOL pinningRevocationCheckRequired;
@property (retain) NSUUID *requestIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
