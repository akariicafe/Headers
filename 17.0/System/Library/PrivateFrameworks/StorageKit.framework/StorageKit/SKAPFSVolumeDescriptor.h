@class NSString;

@interface SKAPFSVolumeDescriptor : SKVolumeDescriptor

@property (readonly, copy, nonatomic) NSString *password;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithName:(id)a0 caseSensitive:(BOOL)a1;
+ (id)descriptorWithName:(id)a0 caseSensitive:(BOOL)a1 password:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 caseSensitive:(BOOL)a1 password:(id)a2;

@end
