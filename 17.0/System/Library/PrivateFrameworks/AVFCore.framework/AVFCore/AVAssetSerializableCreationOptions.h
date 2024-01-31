@class NSDictionary;

@interface AVAssetSerializableCreationOptions : NSObject <NSSecureCoding> {
    NSDictionary *_creationOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)creationOptions;
- (id)initWithCreationOptions:(id)a0;

@end
