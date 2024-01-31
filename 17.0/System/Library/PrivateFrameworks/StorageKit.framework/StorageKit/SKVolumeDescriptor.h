@class NSString, SKFilesystem;

@interface SKVolumeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SKFilesystem *filesystem;
@property (copy, nonatomic) NSString *name;

+ (id)descriptorWithName:(id)a0 filesystem:(id)a1;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 filesystem:(id)a1;

@end
