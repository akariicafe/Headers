@class NSSet, NSData;

@interface CHSWidgetExtensionsBox : NSObject <CHSXPCEncodable> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *extensions;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensions:(id)a0;
- (void)prepareForEncoding;

@end
