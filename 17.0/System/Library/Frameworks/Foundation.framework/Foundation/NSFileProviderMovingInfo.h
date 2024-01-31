@class NSURL;

@interface NSFileProviderMovingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *destinationDirectoryURL;

+ (id)infoWithDestinationDirectoryURL:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
